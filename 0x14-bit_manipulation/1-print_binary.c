#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints binary represenatation of a num
 * @n: a number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int rep = 1;

	if (n > 1)
		print_binary(n << 1);
	if ((n & rep) == 1)
		_putchar('1');
	else
		_putchar('0');
}
