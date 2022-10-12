#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input
 * @f: function name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
