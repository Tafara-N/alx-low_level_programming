#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns the ninth node of a linked list.
 * @head: Head of the list pointer
 * @index: Index to be searched for, starting from 0
 *
 * Return: NULL or the ninth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;

	while (temp)
	{
	if (index == size)
	return (temp);
	size++;
	temp = temp->next;
	}
	return (NULL);
}
