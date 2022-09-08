# include <stdio.h>
# include <unistd.h>
/**
 * main - prints out last part of a quote in the standard error
 * Description:  A file 101-quote.c
 * Return : 1 is always success
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
