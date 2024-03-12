#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * find_index - finds index to start linear search at
 * @list: node to evaluate
 * @value: value to search for
 * @step: interval to jump by
 * @i: index of node to return
 *
 * Return: node to start linear search at
 */
listint_t *find_index(listint_t *list, int value, int step, int *i)
{
	listint_t *final;

	if (list->next == NULL)
	{
		printf("Value checked at index [%zu] = [%i]\n", list->index, list->n);
		*i = list->index - (list->index % step);
		printf("Value found between indexes [%i] and [%zu]\n", *i, list->index);
		return (list);
	}

	if (list->index != 0 && list->index % step == 0)
	{
		printf("Value checked at index [%zu] = [%i]\n", list->index, list->n);
		if (list->n >= value)
		{
			*i = list->index - step;
			printf("Value found between indexes [%i] and [%zu]\n", *i, list->index);
			return (list);
		}
	}

	final = find_index(list->next, value, step, i);

	if (*i == (int)list->index)
	{
		return (list);
	}

	return (final);
}

/**
 * jump_list - performs a jump search on a linked list
 * @list: list to be checked
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: index of value, or -1 if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = (int)sqrt(size);
	int i = -1;
	listint_t *iter;

	if (list == NULL)
	{
		return (NULL);
	}

	iter = find_index(list, value, step, &i);

	for (i = 0; i <= step && iter != NULL; i++, iter = iter->next)
	{
		printf("Value checked at index [%zu] = [%i]\n", iter->index, iter->n);
		if (iter->n == value)
		{
			return (iter);
		}
	}

	return (NULL);
}
