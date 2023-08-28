#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Data of the head node.
 */
int pop_listint(listint_t **head)
{
	int headData;
	listint_t *currentHead;
	listint_t *nextNode;

	if (*head == NULL)
		return (0);

	currentHead = *head;
	headData = currentHead->n;
	nextNode = currentHead->next;

	free(currentHead);

	*head = nextNode;

	return (headData);
}
