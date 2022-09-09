#include <stdio.h>
/**
 * main - Entry Point
 * Description: Prints the alphabet in lowercase
 *
 * Return: 0 is success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
