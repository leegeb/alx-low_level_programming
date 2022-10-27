#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsignedint
 * @b: pointer to a string
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n = n << 1;
		if (b[i] == '1')
		{
			n += 1
		}
		return (n);
	}
}
