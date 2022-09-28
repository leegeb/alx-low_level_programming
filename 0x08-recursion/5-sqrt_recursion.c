#include "main.h"

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
