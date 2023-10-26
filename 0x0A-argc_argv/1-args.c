#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains program command line arg
 * Return: Always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
