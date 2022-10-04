#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: arguement count
 * @av: arguement vector
 *
 * Return: pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av);
{
	int i = 0, j = 0, k = 0, len = 0;

	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len += 1;
	}
	p = malloc((sizeof(char) * len) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
