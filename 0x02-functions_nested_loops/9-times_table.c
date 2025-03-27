#include "main.h"

/**
 * times_table - Function prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int number = 0;
	int one_digit, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			number = i * j;

			if (j == 0)
			{
				_putchar(number + 48);
			}

			one_digit = (number < 10) && (j != 0);

			if (one_digit)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(number + 48);
			}
			else if (number >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((number / 10) + 48);
				_putchar((number % 10) + 48);
			}
		}

		printf("\n");
	}
}
