# MiniShell 🐚

[![42 School](https://img.shields.io/badge/42-School-blue)](https://42firenze.it/)
[![GitHub license](https://img.shields.io/github/license/Nazar963/42_MiniShell)](https://github.com/Nazar963/42_MiniShell/blob/master/LICENSE)
[![Build Status](https://img.shields.io/github/actions/workflow/status/Nazar963/42_MiniShell/build.yml?branch=master)](https://github.com/Nazar963/42_MiniShell/actions)
[![Bonus](https://img.shields.io/badge/Bonus-Complete-brightgreen)](https://github.com/Nazar963/42_MiniShell/42_Minishell_V3)

A minimalist UNIX command interpreter featuring syntax parsing, environment management, process execution, and signal handling.

## Note:
 This repository contains three versions of the Minishell project that I worked on with different team members. In 42_MiniShell, I focused on the parsing aspect of the project. In 42_MiniShell_V2, I worked on the bonus features . In 42_MiniShell_V3, I was responsible for the execution part. 

![Minishell Demo](https://raw.githubusercontent.com/Nazar963/42_MiniShell/master/images/dimo.gif)

## Table of Contents 📖
- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Built-in Commands](#built-in-commands)
- [Signal Handling](#signal-handling)
- [Makefile Targets](#makefile-targets)
- [Testing](#testing)
- [Acknowledgments](#acknowledgments)
- [License](#license)

## Description
Minishell is a 42 School project that recreates a simplified UNIX shell with:
- Command line editing and history
- Environment variable management
- Process creation and piping
- Signal handling and error management
- Redirection and here documents

**Bonus Features**:
- Advanced signal handling (`SIGQUIT`, `SIGINT`)
- Logical operators (`&&`, `||`)
- Wildcard expansion (`*`)
- Heredoc delimiter quoting
- Syntax error highlighting

## Features

### Core Functionality 🔧
| Feature             | Status |
|---------------------|--------|
| Command execution   | ✅     |
| Environment vars    | ✅     |
| Redirections (`>`, `<`, `>>`, `<<`)| ✅ |
| Pipes (`\|`)           | ✅     |
| Quotes handling     | ✅     |
| Exit codes          | ✅     |

### Bonus Features 🚀
| Feature             | Status |
|---------------------|--------|
| Wildcard expansion  | ✅     |
| Logical operators   | ✅     |
| Signal handling     | ✅     |
| Syntax highlighting | ✅     |
| History navigation  | ✅     |

## Installation

### Requirements
- GNU Make
- GCC
- Readline library

### Compilation
1. Install readline development libraries:
   ```bash
   # Ubuntu/Debian
   sudo apt-get install libreadline-dev
   
   # macOS (using Homebrew)
   brew install readline
   ```
2. Clone and build:
   ```bash
   git clone https://github.com/Nazar963/42_MiniShell.git
   cd 42_MiniShell
   make
   ```
3. Run:
   ```bash
   ./minishell
   ```

## Usage
Start the shell:
```bash
./minishell
```

Example session:
```bash
$ echo "Hello $USER" | cat -e
Hello student42$
$ ls -l *.c > filelist.txt
$ < input.txt grep "42" | wc -l >> results.txt
```

## Built-in Commands
| Command   | Description                  | Example               |
|-----------|------------------------------|-----------------------|
| `echo`    | Print arguments              | `echo -n "Hello"`     |
| `cd`      | Change directory             | `cd ~/projects`       |
| `pwd`     | Print working directory      | `pwd`                 |
| `export`  | Set environment variable     | `export PATH=$PATH:.` |
| `unset`   | Unset environment variable   | `unset TEMP`          |
| `env`     | Print environment            | `env`                 |
| `exit`    | Exit shell                   | `exit 0`              |

## Signal Handling
| Signal   | Behavior                          |
|----------|-----------------------------------|
| `CTRL-C` | Interrupt current command         |
| `CTRL-D` | Exit shell (EOF)                  |
| `CTRL-\` | Quit current process (SIGQUIT)    |

## Makefile Targets
- `make`       : Compile minishell
- `make bonus` : Compile with all bonus features
- `make clean` : Remove object files
- `make fclean`: Remove objects and executable
- `make re`    : Rebuild project

## Testing
### Unit Tests
```bash
cd 42_MiniShell_V3/minishell_tester
./tester
```

### Manual Testing
Test with:
- [cacharle/minishell_test](https://github.com/cacharle/minishell_test)
- [LucasKuhn-minishell](https://github.com/LucasKuhn/minishell_tester)

### Memory Management
```bash
make && valgrind --leak-check=full --show-leak-kinds=all --suppressions=utils/readline.supp ./minishell
```

## Acknowledgments
- 42 School curriculum
- GNU Bash documentation
- Readline library resources
- Peer code reviews
- StackOverflow community

## 🤝 Contributing
Feel free to submit issues or pull requests if you have suggestions for improving the test suite or adding more test cases.

## License
This project is licensed under the MIT License - see [LICENSE](LICENSE) for details.

## 📧 Contact
For questions or feedback, please open an issue in the repository.

## ⭐ Star this repository if you found it helpful!
[![GitHub stars](https://img.shields.io/github/stars/Nazar963/42_MiniShell?style=social)](https://github.com/Nazar963/42_MiniShell/stargazers)

---

💻 **Happy Shell Scripting!**  
[![42 School](https://img.shields.io/badge/42-profile-blue)](https://profile-v3.intra.42.fr/users/naal-jen)
[![GitHub Profile](https://img.shields.io/badge/GitHub-Nazar963-lightgrey)](https://github.com/Nazar963)
[![GitHub Follow](https://img.shields.io/github/followers/Nazar963?style=social)](https://github.com/Nazar963)

---

Good luck with your MiniShell project at 42! 🚀
