#include "search_algos.h"

/**
 * linear_search - Searching for a value in an array of integers
 *					using Linear Search Algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to be searched for
 *
 * Return: If value is absent or the array is NULL - (-1),
 *			otherwise, first index where the value is located
 *
 * Description: Printing the value every time it is compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
