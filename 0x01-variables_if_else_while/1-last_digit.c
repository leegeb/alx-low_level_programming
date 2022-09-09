#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print last digit of a number
 * Return: 0 is success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 6)
		printf("Last digit of %d is n and is less than 6 and not 0,\n", n);
	else if (n > 5)
		printf("Last digit of %d is n and is greater than 5,\n", n);
	else if (n == 0)
		printf("Last digit of %d is 0 and is 0,\n", n);
	return (0);
}
