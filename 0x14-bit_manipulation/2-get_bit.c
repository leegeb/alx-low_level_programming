#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: index to get bit
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rep = 1;

	if (index >= sizeof(n) * 8)
		return (-1);
	rep <<= index;
	if ((rep & n) != 0)
		return (1);
	else
		return (0);
	return (-1);
}
