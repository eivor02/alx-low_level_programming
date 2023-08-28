#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: Head of the list.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}
