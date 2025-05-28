/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:31:42 by gfantech          #+#    #+#             */
/*   Updated: 2025/05/28 15:17:23 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_child(char **input, t_pipex *pipe)
{
	int	i;
	int	pipe_count;

	i = 0;
	pipe_count = split_size(input) - 1;
	while (input[i])
	{
		free(input[i]);
		i++;
	}
	free(input);
	free_pipes(pipe->fd, pipe_count);
	exit(1);
}

void	close_pipes(int **fd, int i)
{
	while (i >= 0)
	{
		close(fd[i][1]);
		close(fd[i][0]);
		i--;
	}
}

void	free_pipes(int **fd, int i)
{
	while (i >= 0)
	{
		close(fd[i][1]);
		close(fd[i][0]);
		free(fd[i]);
		i--;
	}
	free(fd);
}

void	free_split(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		a[i] = NULL;
		i++;
	}
	free(a);
	a = NULL;
}
