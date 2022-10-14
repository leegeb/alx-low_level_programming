#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - that prints numbers
 * @separator: string to be printed
 * @n: number of elements
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;

	if (n != 0)
	{
		va_start(va, n);
		for (i = 0; i <= (n - 1); i++)
		{
			printf("%d", va_arg(va, int));
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(va);
}
