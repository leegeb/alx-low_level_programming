#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: lists of list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *h;
	unsigned int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
