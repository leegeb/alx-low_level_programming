#include "main.h"
#include < stdio.h >

/**
 * _isupper - Afunction that checks for uppercase character
 * @c: input
 * Returns: 1 if c is uppercase , 0 otherwise
 */
int_isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
