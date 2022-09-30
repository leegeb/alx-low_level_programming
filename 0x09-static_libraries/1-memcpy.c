#include "main.h"

/**
 * _memcpy - function copies n memory from src to dest
 * @src: source
 * @dest: memory area
 * @n: length of src
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
