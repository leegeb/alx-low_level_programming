#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argv: arguments
 * @argc: arguments count
 *
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[1]);
		printf("%d\n", a * b);

		return (0);
	}
	printf("Error\n");
	return (1);
}
