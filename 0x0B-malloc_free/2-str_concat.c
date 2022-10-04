#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of a strin
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}

/**
 * _strncat - append two strings
 * @dest: first parameter
 * @src: second paramete
 * n: third parameter
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

/**
 * *str_concat - function allocates a space for string concatnation
 * @s1: array pointer to the destination of string
 * @s2: array pointer to the source of string
 *
 * Return: pointer to copy of a string
 */

char *str_concat(char *s1, char *s2)
{
	char *pat;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	pat = malloc(((size1 + size2) + 1) * sizeof(char));
	if (pat == NULL)
	{
		return (NULL);
	}
	_strncat(pat, s1, size1);
	_strncat(pat, s2, size2);
	pat += '\0';
	return (pat);
}
