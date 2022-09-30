#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argv: arguments
 * @argc: argument counts
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
