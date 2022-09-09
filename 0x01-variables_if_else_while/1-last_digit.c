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
	int D;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	D = n % 10;
	if (D > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, D);
	else if (D == 0)
		printf("%s %d is %d and is 0\n", str, n, D);
	else if (D < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, D);
	return (0);
}
