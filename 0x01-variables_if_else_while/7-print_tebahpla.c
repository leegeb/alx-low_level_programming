# include <stdio.h>
/**
 * main - entry option
 * Description: prints the lowercase alphabet in reverse
 * Return: 0 is success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
