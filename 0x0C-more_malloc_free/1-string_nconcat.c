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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_con;
	unsigned int i = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[size1])
		size1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[size2])
		size2++;

	if (n >= size2)
	n = size2;

	new_con = malloc(size1 + n + 1)
	if (new_con == NULL)
		return (NULL);

	for (i = 0; i <  (size1 + n); i++)
	{
		if (i < size1)
			new_con[i] = *s1, s1++;
		else
			new_con[i] = *s2, s2++;
	}
	new_con[i] = '\0';
	return (new_con);
}
