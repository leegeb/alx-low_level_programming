#include "main.h"

/**
 * _strncat - concatenates two strings from n input of src
 * @dest: The string to be appended on
 * @src: The string to be appended to dest
 * @n: number of bytes from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
