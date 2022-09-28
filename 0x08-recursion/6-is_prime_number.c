#include "main.h"

/**
 * prime_check - checkes if a number is prime
 * @p: possible prime number
 * @d: checked number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int d, int p)
{
	if (p < 2 || p % d == 0)
		return (0);
	else if (d > p / 2)
		return (1);
	return (prime_check(d + 1, p));
}
 /**
  * is_prime_number - gives prime number
  * @n: given number
  *
  * Return: 1 if prime number if not 0
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
