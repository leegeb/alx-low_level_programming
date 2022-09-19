#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: strings to reverse
 * Return: none
 */


void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
