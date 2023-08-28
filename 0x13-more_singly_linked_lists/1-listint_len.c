#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Head of the list.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;
	const listint_t *current = h;

	while (current)
	{
		current = current->next;
		nodeCount++;
	}

	return (nodeCount);
}
