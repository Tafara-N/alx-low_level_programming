#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list,
 * at a given position
 * @head: Pointer to the first node in the list
 * @idx: Index for additon of new node
 * @n: Data to insert in new node
 *
 * Return: Pointer to new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}

