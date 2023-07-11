#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int c = 0, i = 0, j = 0, cp = 0;
	if (ac == 0 || av == 0)
		return (NULL);

	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);

		while (av[i][j] != '\0')
		{
			c++;
			j++;
		}
		c++;
		i++;
		j = 0;
	}

	ptr = malloc((c + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	j = 0;
	cp = 0;
	while (cp < c)
	{
		if (av[i][j] == '\0')
		{
			ptr[cp] = '\n';
			i++;
			cp++;
			j = 0;
		}
		if (cp < c - 1)
		{
			ptr[cp] = av[i][j];
		}
		cp++;
		j++;
	}
	ptr[cp] = '\0';

	return (ptr);
}
