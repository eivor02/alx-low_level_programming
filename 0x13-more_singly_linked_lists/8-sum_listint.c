#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
