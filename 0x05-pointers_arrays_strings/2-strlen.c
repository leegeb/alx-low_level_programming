#include "main.h"
#include <string.h>

/**
 * _strlen - length of a string
 * @s: string
 * Returns: return length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
