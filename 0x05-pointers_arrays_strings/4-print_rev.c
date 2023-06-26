#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: pointer to string
 *Return: No return.
 */
void print_rev(char *s)
{
	int i;
	int a = 0;    while (*(s + a) != '\0')
		a++;
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
