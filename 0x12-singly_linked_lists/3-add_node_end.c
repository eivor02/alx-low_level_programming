#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: String to store in the list.
 *
 * Return: Address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
