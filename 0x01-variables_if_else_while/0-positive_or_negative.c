#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *  Description - prints a positive or negative number
 * Return: 0 is success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("(0)is zero");
	return (0);
}
