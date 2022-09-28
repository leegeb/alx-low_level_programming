#include "main.h"

/**
 * is_divisible - checkes if a number is prime
 * @p: possible prime number
 * @d: checked number
 *
 * Return: 1 if prime, 0 if not
 */
int is_divisible(int d, int p)
{
	if (p < 2 || p % d == 0)
		return (0);
	else if (d > P / 2)
		return (1);
	return (is_divisible(d + 1, p));
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
	return (is_divisible(2, n));
}
