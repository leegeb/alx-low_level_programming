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
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
