#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned long int
 * @index: bit index to be changed
 *
 * Return: 1 if it works -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
