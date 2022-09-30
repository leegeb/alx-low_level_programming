#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argv: arguments
 * @argc: length of argv
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int place, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	place = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[place] != '\0')

	{
		if (total >= coins[place])
		{
			aux = (total / coins[place]);
			change += aux;
			total -= coins[place] * aux;
		}

		place++;
	}

	printf("%d\n", change);
	return (0);
}
