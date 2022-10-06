#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: input integer of the no of strings
 *
 * Return: a pointer or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *c;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	c = malloc((size1 + n + 1) * sizeof(char));

	if (c == NULL)
		return (0);

	for (i = 0; i <  size1; i++)
	{
		c[i] = s2[i - size1];
	}
	for (; i < (size1 + n); i++)
	{
		c[i] = s2[i - size1];
	}
	c[1] = '\0';

	return (c);
}
