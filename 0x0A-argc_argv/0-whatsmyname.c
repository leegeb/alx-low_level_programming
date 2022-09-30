#include <stdio.h>
#include "main.h"

/**
 * main - prints a name followed by a new line
 * @argv: arguments
 * @argc: argument count
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
