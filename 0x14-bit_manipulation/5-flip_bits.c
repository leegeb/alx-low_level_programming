#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: given number
 * @m: number to flip into
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;

	count = 0;
	for (i = 0; i <= (sizeof(unsigned long int) * 8); i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		m >>= 1;
		n >>= 1;
	}
	return (count);
}
