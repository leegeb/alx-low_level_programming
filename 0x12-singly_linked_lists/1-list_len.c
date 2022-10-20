#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: lists of list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *nodes;
	unsigned int counter = 0;

	nodes = h;
	while (nodes)
	{
		counter++;
		nodes = nodes->next;
	}
	return (counter);
}
