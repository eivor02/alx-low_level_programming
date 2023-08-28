#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint list.
 * @head: Pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	if (head == NULL)
		return (NULL);

	end = *head;
	if (end != NULL)
	{
		while (end->next != NULL)
			end = end->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		end->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
