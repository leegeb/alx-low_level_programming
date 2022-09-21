#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: a pointer to the string to be concatenated
 * @src: the source string to be appended
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (*dest[i] != '\0')
	{
		i++;
	}

	while (*src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	*dest[i] = '\0';
	return (dest);
}
