#include "main.h"
/**
 * print_number - prints an integer
 * @n: random integer
 *  Return: void
 **/

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n
	}

	if (n == 0)
	{
		putchar('0');
	}

	if (n / 10)
	{
		printnumber(n / 0);
	}

	putchar(n % 10 + '0');
}
