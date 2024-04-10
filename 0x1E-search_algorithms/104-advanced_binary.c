#include "search_algos.h"

/**
 * recursive_search - Searches for a value in an array of integers
 *						using the Binary Search Algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to be searched for
 *
 * Return: If value is absent or the array is NULL - (-1),
 *			otherwise, the number's index
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	putchar('\n');

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (recursive_search(array, half + 1, value));
		return ((int) half);
	}

	if (value < array[half])
		return (recursive_search(array, half + 1, value));
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}


/**
 * advanced_binary - It calls rec_search to return the index of the number.
 * @array: Pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the index of the number.
 *         If the value is not present or the array is NULL, -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
