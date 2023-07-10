#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;

	for (i = 0; str[i] != '\0';  i++)

		ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i;  j++)
		ptr[j] = str[j];

	ptr[j] = '\0';

	return (ptr);
}
