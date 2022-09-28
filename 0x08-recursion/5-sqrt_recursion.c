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
	if (t * t == q)
		return (t);
	if (t * t > q)
		return (-1);
	return (sqrt_check(t + 1, q));
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
