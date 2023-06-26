#include "main.h"
/**
 * rev_string - reverses a string.
 *@s: pointer to string.
 *Return: No return.
 */
void rev_string(char *s)
{
	int i = 0;
	int b = 0;
	int c;

	while (s[b] != '\0')
	{
		b++;
	}

	while (i < b / 2)
	{
		c = s[i];
		s[i] = s[b - i - 1];
		s[b - i - 1] = c;
		i++;
	}
}


