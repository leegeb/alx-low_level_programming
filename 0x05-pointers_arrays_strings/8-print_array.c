#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n number of integers
 * @n: number of elements
 * @a: array
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
