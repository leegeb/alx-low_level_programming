#include "main.h"

/**
 * _strdup - _strdup a pointer to a newly allocated space
 * which contains a copy of the string given as a parameter
 *
 * @str: string parameter
 * Return: NULL if str = NULL, if insufficient memory
 * On success,returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, dup;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup++;
	cpy = malloc(sizeof(char) * (dup + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[dup] = '\0';
	return (cpy);
}
