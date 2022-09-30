#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argv: arguments
 * @argc: arguments count
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}
