#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 * Return: 0- big endian, 1-small endian
 */

int get_endianness(void)
{
	int i = 1;
	char *end = (char *)&i;

	if (*end)
		return (1);
	return (0);
}
