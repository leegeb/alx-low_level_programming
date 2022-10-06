#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: the byte size of each element
 *
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *insert;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	insert = memo;

	for (index = 0; index < (size * nmemb); index++)
		insert[index] = '\0';

	return (memo);
}
