# Concepts

*For this project, we expect you to look at these concepts:*

- [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)
- [Pointers and arrays](https://intranet.alxswe.com/concepts/60)

![Pointers](pointers.jpg)

# Resources

## Read or watch:
- [C - Pointer to Pointer](https://intranet.alxswe.com/rltoken/eyikXPg7ZxCAEuWklB6xtQ)
- [C – Pointer to Pointer with example](https://intranet.alxswe.com/rltoken/ojr7OUUm2I-MULE4lWlrkg)
- [Multi-dimensional Arrays in C](https://intranet.alxswe.com/rltoken/HUZIJ6t55KM7d7FBCwWm8Q)
- [Two dimensional (2D) arrays in C programming with example](https://intranet.alxswe.com/rltoken/Dx9nIBRj68sRBGe2NRI_aQ)

# Additional Resources
- [Arrays, Strings & Pointers in C Programming](https://intranet.alxswe.com/rltoken/-Bg-0C4bORppo0cXqdCJQQ)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/YpzhlccIJNihbnYgObEStg), **without the help of Google:**

General

# Requirements

## General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

# More Info

You do not need to learn about pointers to functions, arrays of structures, `malloc` and `free` - yet.

## Quiz questions

Question #0
What is the size of *p in this code?

int *p;

4 bytes


8 bytes


16 bytes

Question #1
What is stored inside a pointer to a pointer to an int?


An address where an int is stored


An int


An address where an address is stored

Question #2
What is the size of p in this code?

int *p;

4 bytes


8 bytes


16 bytes

Question #3
In this following code, what is the value of a[3][0]?

int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

5


7


8


{7, 8}

Question #4
What is the size of p in this code?

int **p;

4 bytes


8 bytes


16 bytes

Question #5
In this following code, what is the value of a[0][0]?

int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

4


1


2


3

### Question #6

In this following code, what is the value of `a[3][1]`?

```c
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [ ] 8

- [ ] 7

- [ ] 9

- [ ] {7, 8}

### Question #7

What is the size of `*p` in this code?

```c
int **p;
```

- [ ] 4 bytes

- [ ] 8 bytes

- [ ] 16 bytes

### Question #8

In this following code, what is the value of `a[1][1]`?

```c
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
```

- [ ] 4

- [ ] 1

- [ ] 2

- [ ] 3
