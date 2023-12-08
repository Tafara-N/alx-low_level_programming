#include "lists.h"

/**
 * delete_dnodeint_at_index - Function to rm the node at index of a linked list
 * @head: Head of the list
 * @index: New node's index
 *
 * Return: On success 1, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hd1;
	dlistint_t *hd2;
	unsigned int x;

	hd1 = *head;

	if (hd1 != NULL)
		while (hd1->prev != NULL)
			hd1 = hd1->prev;

	x = 0;

	while (hd1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = hd1->next;

				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hd2->next = hd1->next;

				if (hd1->next != NULL)
					hd1->next->prev = hd2;
			}

			free(hd1);
			return (1);
		}
		hd2 = hd1;
		hd1 = hd1->next;
		x++;
	}
	return (-1);
}
