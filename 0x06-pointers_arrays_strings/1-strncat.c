#include "main.h"

/**
 * _strncat - append two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
