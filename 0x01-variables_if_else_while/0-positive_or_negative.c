#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program assigns a random number to the variable 'n' each time it is
 *        executed, in order to print whether the number stored in the variable
 *        'n' is positive or negative.
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	printf("%d is zero\n", n);

	return (0);
}
