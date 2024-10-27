# Resources

**Read or watch:**
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://intranet.alxswe.com/rltoken/0OYhpL2cJfsIMBWhTuZsAA)
- [include guard](https://intranet.alxswe.com/rltoken/oF2vgIZNePdU965jCEZLHA)
- [Common Predefined Macros](https://intranet.alxswe.com/rltoken/ROl5xAMKX-JpenEqmf7FnQ)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/ipbpW8pLm91jdr3YD-AENg), **without the help of Google:**

## General
- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

# Requirements

## General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Quiz questions

### Question #0

Why should we use include guards in our header files?

- [ ] To avoid the problem of double inclusion when dealing with the include directive.

- [ ] Because we said so, and we should never ask why.

### Question #1

This is the correct way to define the macro `SUB`:

```c
#define SUB(a, b) a - b
```

- [ ] No, it should be written this way:

```c
#define SUB(a, b) ((a) - (b))
```

- [ ] Yes

- [ ] No, it should be written this way:

```c
#define SUB(a, b) (a - b)
```

- [ ] No, it should be written this way:

```c
#define SUB(a, b) (a) - (b)
```

### Question #2

`NULL` is a macro

- [ ] False

- [ ] True

### Question #3

What will be the last 5 lines of the output of the command `gcc -E` on this code?

```c
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```

Choose:

```c
int main(void)
{
 '\0';
 return (0);
}
```

```c
int main(void)
{
 0;
 return (0);
}
```

```c
int main()
{
 0;
 return (0);
}
```

```c
int main(void)
{
 ((void *)0);
 return (0);
}
```

### Question #4

The macro `__FILE__` expands to the name of the current input file, in the form of a C string constant.

- [ ] False

- [ ] True

### Question #5

What are the steps of compilation?

- [ ] compiler 2. preprocessor 3. assembler 4. linker

- [ ] preprocessor 2.compiler 3. assembler 4. linker

- [ ] preprocessor 2.compiler 3. linker 4. assembler

### Question #6

The preprocessor links our code with libraries.

- [ ] False

- [ ] True

### Question #7

The preprocessor generates assembly code

- [ ] False

- [ ] True

### Question #8

This code will try to allocate 1024 bytes in the heap:

```c
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
```

- [ ] False

- [ ] True

### Question #9

The preprocessor generates object code

- [ ] False

- [ ] True

### Question #10

This portion of code is actually using the library stdlib.

```c
#include <stdlib.h>
```

- [ ] False

- [ ] True

### Question #11

What is the `gcc` option that runs only the preprocessor?

- [ ] -preprocessor

- [ ] -a

- [ ] -cisfun

- [ ] -P

- [ ] -E

- [ ] -pedantic

- [ ] -p

### Question #12

The preprocessor removes all comments

- [ ] False

- [ ] True

### Question #13

What will be the output of this program? (on a standard 64 bits, Linux machine)

```c
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```

- [ ] sizeof(i) = 1

- [ ] sizeof(i) = 4

- [ ] Segmentation Fault

- [ ] It does not compile

- [ ] sizeof(i) = 5

- [ ] sizeof(i) = 8

### Question #14

What does the macro `TABLESIZE` expand to?

```c
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```

- [ ] 1020

- [ ] 37

- [ ] nothing

## Tasks

### 0. Object-like Macro

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a
1122
julien@ubuntu:~/0x0c. macro, structures$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `0-object_like_macro.h`

### 1. Pi

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `1-pi.h`

### 2. File name

Write a program that prints the name of the file it was compiled from, followed by a new line.

- You are allowed to use the standard library

```bash
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `2-main.c`

### 3. Function-like macro

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d
980, 980
julien@ubuntu:~/0x0c. macro, structures$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `3-function_like_macro.h`

### 4. SUM

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e
1122
julien@ubuntu:~/0x0c. macro, structures$
```

**Repo:**
- GitHub repository: `alx-low_level_programming`
- Directory: `0x0D-preprocessor`
- File: `4-sum.h`
