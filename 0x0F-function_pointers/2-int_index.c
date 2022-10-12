#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @size: number if elements in array
 * @cmp: a pointer to function to compare
 * @array: array to be searched
 *
 * Return: -1 if size<= 0 and no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int g;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			g = cmp(array[i]);
			if (g)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
