# Introduction to programming with 'C'.

## Table of Content
- [Author](#author)
- [Description](#description)
___

- [Argc and Argv](0x0A-argc_argv/README.md)
- [Binary Trees](0x1D-binary_trees/README.md)
- [Bit Manipulation](0x14-bit_manipulation/README.md)
- [Debugging](0x03-debugging/README.md)
- [Doubly Linked Lists](0x17-doubly_linked_lists/README.md)
- [Dynamic Libraries](0x18-dynamic_libraries/README.md)
- [File Input and Output](0x15-file_io/README.md)
- [First Day Of C](first_day_of_C/README.md)
- [Function Pointers](0x0F-function_pointers/README.md)
- [Functions and Nested Loops: I](0x02-functions_nested_loops/README.md)
- [Functions and Nested Loops: II](0x04-more_functions_nested_loops/README.md)
- [Hash Tables](0x1A-hash_tables/README.md)
- [Hello World](0x00-hello_world/README.md)
- [MakeFile](0x1C-makefiles/README.md)
- [Malloc and Free: I](0x0B-malloc_free/README.md)
- [Malloc and Free: II](0x0C-more_malloc_free/README.md)
- [Pointers, Arrays and Strings: I](0x05-pointers_arrays_strings/README.md)
- [Pointers, Arrays and Strings: II](0x06-pointers_arrays_strings/README.md)
- [Pointers, Arrays and Strings: III](0x07-pointers_arrays_strings/README.md)
- [Preprocessor](0x0D-preprocessor/README.md)
- [Printf](0x11-printf/README.md)
- [Recursion](0x08-recursion/README.md)
- [Search Algorithms](0x1E-search_algorithms/README.md)
- [Simple Shell](0x16-simple_shell/README.md)
- [Singly Linked Lists: I](0x12-singly_linked_lists/README.md)
- [Singly Linked Lists: II](0x13-more_singly_linked_lists/README.md)
- [Sorting Algorithms](0x1B-sorting_algorithms_and_Big_O/README.md)
- [Stacks, Queues: LIFO and FIFO](0x19-stacks_queues-LIFO_FIFO/README.md)
- [Static Libraries](0x09-static_libraries/README.md)
- [Structures and Typedef](0x0E-structures_typedef/README.md)
- [Variables, If, Else and While](0x01-variables_if_else_while/README.md)
- [Variadic Functions](0x10-variadic_functions/README.md)
___

- [More Info](#more-info)
- [Requirements](#requirements)

# Description

## Concepts

*For this project, we expect you to look at these concepts:*

- [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)
- [C programming](https://intranet.alxswe.com/concepts/26)

# Resources

**Read or watch:**
- [Everything you need to know to start with C.pdf](https://github.com/Tafara-N/alx-low_level_programming/blob/d3e4e3a3782095750e9b99bcd075f7ed867a386c/0x00-hello_world/resources/all_about_c.pdf) (*You do not have to learn everything in there yet, but make sure you read it entirely first*)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
- [Hash-bang under the hood](https://x.com/unix_byte/status/1024147947393495040) (*Look at only after you finish consuming the other resources*)
- [Linus Torvalds on C vs. C++](https://harmful.cat-v.org/software/c++/linus) (*Look at only after you finish consuming the other resources*)

## man or help:
- `gcc`
- `printf (3)`
- `puts`
- `putchar`

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/VGWjGaWZbgcLYTwfLEBmmQ), **without the help of Google:**

## General
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## Requirements

## C
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)

## Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`

# More Info

## Betty linter

### Installing betty linter for .c files

```shell
mkdir Betty && cd Betty
```

```shell
git clone https://github.com/holbertonschool/Betty.git
```

```shell
cd Betty
```

```shell
sudo ./install.sh
```

Put this inside `betty` file

Or

```shell
echo '#!/bin/bash

# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done' > betty
```

```shell
chmod u+x betty
```

```shell
sudo mv betty /bin/
```

To check style:

```shell
betty filename.c
```

## Author

**Tafara Nyamhunga  - [Github](https://github.com/tafara-n) / [Twitter](https://twitter.com/tafaranyamhunga)**
