#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: strings to reverse
 * Return: none
 */


void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
