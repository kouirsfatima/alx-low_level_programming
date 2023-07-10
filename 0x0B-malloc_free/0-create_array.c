#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)

		return (NULL);


	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)

		return (NULL);


	for (i = 0; i < size; i++)

		ptr[i] = c;

	ptr[size] = '\0';

	return (ptr);
}
