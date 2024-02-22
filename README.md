### Concepts  
*For this project, we expect you to look at these concepts:*

- [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)
- [C programming](https://intranet.alxswe.com/concepts/26)

# Resources  
## Read or watch:
- [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw) (*You do not have to learn everything in there yet, but make sure you read it entirely first*)
- [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
- [“C” Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ)
- [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
- [Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw)
- [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)
- [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
- [Betty Coding Style](https://intranet.alxswe.com/rltoken/wJg_qB9ducisfVQNk62htg)
- [Hash-bang under the hood](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg) (*Look at only after you finish consuming the other resources*)
- [Linus Torvalds on C vs. C++](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA) (*Look at only after you finish consuming the other resources*)

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
To run the Betty linter just with command `betty <filename>`:

- Go to the [Betty](https://intranet.alxswe.com/rltoken/QkZtBg3ps5iLBlUdX-CPJQ) repository
- Clone the [repo](https://intranet.alxswe.com/rltoken/QkZtBg3ps5iLBlUdX-CPJQ) to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:

```
#!/bin/bash
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
done
```

- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`  
You can now type `betty <filename>` to run the Betty linter!
