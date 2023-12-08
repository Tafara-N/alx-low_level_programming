#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * @hd: Head of the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *hd)
{
	int tally;

	tally = 0;

	if (hd == NULL)
		return (tally);

	while (hd->prev != NULL)
		hd = hd->prev;

	while (hd != NULL)
	{
		printf("%d\n", hd->n);
		tally++;
		hd = hd->next;
	}

	return (count);
}

