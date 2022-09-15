#include <stdio.h>
#include "main.h"

/**
 * _isupper - Afunction that checks for uppercase character
 * @c: input
 * Returns: 1 if c is uppercase , 0 otherwise
 */
int_isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
