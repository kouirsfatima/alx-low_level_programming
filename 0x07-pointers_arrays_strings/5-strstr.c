#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *j;
	char *i;

	for (i = haystack; *i != '\0'; i++)
	{
		for (j = needle; *j != '\0'; j++)
		{
			if (*(i + (j - needle)) != *j)
				break;
		}

		if (*j == '\0')
			return (i);
	}

	return ('\0');
}
