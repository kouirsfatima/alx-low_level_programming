#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @upp: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *upp)

{
	int i = 0;

	while (upp[i] != '\0')
	{
		if (upp[i] >= 'a' && upp[i] <= 'z')
			*(upp + i) = *(upp + i) - 32;
				i++;
	}

	return (upp);
}
