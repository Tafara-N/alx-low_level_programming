#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to first node in the list
 *
 * Return: Pointer to first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}

