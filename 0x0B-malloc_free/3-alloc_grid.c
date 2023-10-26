#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **bee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		bee[x] = malloc(sizeof(int) * width);

		if (bee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bee[x]);

			free(bee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bee[x][y] = 0;
	}

	return (bee);
}
