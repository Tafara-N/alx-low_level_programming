#include "search_algos.h"

/**
 * interpolation_search - Searching for a value in an array of integers
 *							using the Interpolation Search Algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to be searched for
 * Return: If value is not present or the array is NULL - (-1)
 *			otherwise, the index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;
	double i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		i = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		position = (size_t)(low + i);

		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
		if (low == high)
			break;
	}
	return (-1);
}
