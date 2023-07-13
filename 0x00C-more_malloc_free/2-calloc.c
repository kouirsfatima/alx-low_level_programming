#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0)

		return (NULL);


	ptr = malloc((nmemb + 1) * sizeof(char));


	if (ptr == NULL)

		return (NULL);


	for (i = 0; i < size; i++)

		ptr[i] = nmemb;

	ptr[size] = '\0';

	return (ptr);
}
