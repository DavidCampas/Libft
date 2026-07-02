# Libft

A C static library that re-implements a selection of the standard C library, from memory and string handling to conversions and file-descriptor output.

![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)
![Make](https://img.shields.io/badge/Make-427819?logo=gnu&logoColor=white)
![42 Barcelona](https://img.shields.io/badge/42-Barcelona-000000?logo=42&logoColor=white)

## About

Libft is the foundational project of the 42 Common Core: a hand-written reimplementation of common libc functions, compiled into a reusable static archive (`libft.a`). It demonstrates a solid grasp of pointers, manual memory management, string manipulation and defensive C programming, all built under the strict `-Wall -Wextra -Werror` standard. The resulting library is meant to be reused across later 42 projects.

## What it does

- **Character checks & conversion**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Memory operations**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String operations**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **String building & transformation**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **Conversions**: `ft_atoi`, `ft_itoa`
- **File-descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Build & run

Libft is a library, not an executable. Build the archive with `make`, then link it into your own program.

```bash
# Build libft.a (sources live in the Libft/ subfolder)
cd Libft
make            # compiles all objects and creates libft.a

make clean      # remove object files
make fclean     # remove objects and libft.a
make re         # rebuild from scratch
```

Using it in your own project:

```bash
# main.c includes "libft.h" and calls ft_* functions
gcc main.c -L. -lft -I. -o my_program
./my_program
```

## Concepts

C · GNU Make · static libraries (`ar`) · pointers & manual memory management · string manipulation · dynamic allocation · defensive programming (`-Wall -Wextra -Werror`)

_42 Barcelona · Common Core project._
