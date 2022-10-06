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
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++;
			len++;
	new_con = malloc(sizeof(char) * (len + 1));

	if (new_con == NULL)
		return (NULL);

		len = 0;

		for (index = 0; s1[index]; index++;
			new_con[len++] = s1[index]

		for (index = 0; s2[index] && index < n; index++)
			new_con[len++] = s2[index];

			new_con[len] = '\0';

			return (new_con);
}
