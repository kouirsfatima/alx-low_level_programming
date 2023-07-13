#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
	{
		a = i + j;
	}
	else
	{
		a = i + n;
	}

	ptr = malloc((a + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
		ptr[b] = s1[b];

	for (; b < a; b++)
		ptr[b] = s2[b - i];

	ptr[b] = '\0';

	return (ptr);
}

