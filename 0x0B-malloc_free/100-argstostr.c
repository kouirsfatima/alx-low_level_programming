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
	int i, j, len, total_len = 0;
	char *ptr, *temp;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]) + 1;
		total_len += len;
	}

	ptr = malloc((total_len + ac) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	temp = ptr;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			*temp = av[i][j];
			temp++;
		}
		*temp = '\n';
		temp++;
	}
	*temp = '\0';

	return (ptr);
}

