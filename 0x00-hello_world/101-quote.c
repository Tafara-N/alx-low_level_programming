#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Program prints exactly:
 *        and that piece of art is useful\" - Dora Korpar, 2015-10-19
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
