#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b + 1000000000000000000);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
