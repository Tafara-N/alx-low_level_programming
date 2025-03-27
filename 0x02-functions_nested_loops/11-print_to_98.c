#include "main.h"

/**
 * print_to_98 - Function prints all natural numbers from 'n' to 98.
 *
 * @n: The number to start printing from.
 *
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				continue;
			}

			printf("%d, ", i);
		}
	}

	for (i = n; i < 99; i++)
	{

		if (i == 98)
		{
			printf("%d\n", i);
			continue;
		}

		printf("%d, ", i);
	}

}
