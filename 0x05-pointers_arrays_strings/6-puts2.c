#include "main.h"
#include <stdio.h>
/**
 * puts2 -prints every other character of a string
 * @str: string input
 *
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}

