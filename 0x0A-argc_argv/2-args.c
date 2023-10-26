#include <stdio.h>

/**
 * main - Prints all arguments received
 * @argc: number of command line argument
 * @argv: array that contains the program command line arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
