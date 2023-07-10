#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)

{

	char *ptr;
	unsigned int i, j, a, b, s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = strlen(s1);
	b = strlen(s2);
	s = a + b;

	ptr = malloc((s + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		ptr[i] = s1[i];

	for (j = 0; j < b; j++)
		ptr[i++] = s2[j];

	ptr[s] = '\0';

	return (ptr);
}
