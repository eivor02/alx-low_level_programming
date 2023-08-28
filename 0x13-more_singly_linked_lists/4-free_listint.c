#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint list.
 * @head: Pointer to the head of the list to free.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
