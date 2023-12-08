#include "lists.h"

/**
 * free_dlistint - Function frees a list.
 * @head: Head of the list's pointer
 *
 * Return: On success, nothing
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
