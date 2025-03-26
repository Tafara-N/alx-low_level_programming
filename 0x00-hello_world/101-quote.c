#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Program prints exactly:
 *        and that piece of art is useful\" - Dora Korpar, 2015-10-19
 *
 * Return: int
 *       : __description__
 */

int main(void)
{
	char *ptr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, ptr, strlen(ptr));

	return (1);
}
