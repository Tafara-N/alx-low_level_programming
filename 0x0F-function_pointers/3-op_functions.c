#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The difference of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The product of a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The quotient of a / b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Remainder of the division of a / b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
