#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list.
 * @head: A pointer to a pointer to the first element in the list.
 * @n: The data to insert in the new element.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (temp = *head; temp->next; temp = temp->next)
	{

	}

	temp->next = new_node;

	return (new_node);
}

