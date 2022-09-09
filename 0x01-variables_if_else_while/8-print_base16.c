#include <stdio.h>
/**
 * main - entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0 is success
 */
int main(void)
{
	int n;
	char alphabet;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f' ; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
