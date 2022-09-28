#include "main.h"

/**
 * sqrt_check - checks for the square root of q
 * @q: input number
 * @t: guess number
 *
 * Return: -1 or Square root of q
 */
int sqrt_check(int t, int q)
{
	if (q * q == t)
		return (q);
	if (q * q > t)
		return (-1);
	return (sqrt_check(q + 1, t));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 *
 * Return: -1, natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
