#include "lists.h"

/**
 * dlistint_len - Function returns the number of elements
 * @h: Head of the list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int tally;

	tally = 0;

	if (h == NULL)
		return (tally);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
