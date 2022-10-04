#include "main.h"

/**
 * alloc_grid - to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure , if width or height is 0
 * or negative
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **pat;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pat = malloc(height * sizeof(int *));
	if (pat == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		pat[a] = malloc(width * sizeof(int));
		if (pat[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(pat[b]);
			free(pat);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			pat[a][b] = 0;
		}

	}
	return (pat);
}
