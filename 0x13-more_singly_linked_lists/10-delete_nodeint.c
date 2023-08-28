#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the list where the node is deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevNode;
	listint_t *nextNode;

	prevNode = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevNode != NULL; i++)
		{
			prevNode = prevNode->next;
		}
	}

	if (prevNode == NULL || (prevNode->next == NULL && index != 0))
	{
		return (-1);
	}

	nextNode = prevNode->next;

	if (index != 0)
	{
		prevNode->next = nextNode->next;
		free(nextNode);
	}
	else
	{
		free(prevNode);
		*head = nextNode;
	}

	return (1);
}
