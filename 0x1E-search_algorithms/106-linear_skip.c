#include "search_algos.h"

/**
 * linear_skip - Searching for a value in sorted skip list of integers
 *
 * @list: Pointer to the head of the skip list to search
 * @value: Value to searched for
 *
 * Return: If value is absent in list or if head is NULL - (NULL)
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current_pointer;

	if (list == NULL)
		return (NULL);

	current_pointer = list;

	do {
		list = current_pointer;
		current_pointer = current_pointer->express;

		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)current_pointer->index, current_pointer->n);
	} while (current_pointer->express && current_pointer->n < value);

	if (current_pointer->express == NULL)
	{
		list = current_pointer;

		while (current_pointer->next)
			current_pointer = current_pointer->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)current_pointer->index);

	while (list != current_pointer->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);

		if (list->n == value)
			return (list);

		list = list->next;
	}

	return (NULL);
}
