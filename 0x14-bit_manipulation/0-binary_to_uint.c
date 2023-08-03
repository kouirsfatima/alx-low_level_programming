#include "main.h"
#include <string.h>


/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int len = 0, a = 1;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	len--;

	if (b[0] == '1' && b[1] == '\0')
		return (1);

	do {
		if (b[len] == '1')
			total += a;
		a *= 2;
		len--;

	}	while (len >= 0);

	return (total);
}
