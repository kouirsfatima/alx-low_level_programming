#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet, in lowercase.
 *
 * Return: NO return
 */

void print_alphabet_x10(void)
{
	char x = 'a', i;

	for (i = 0; i < 10; i++)
	{
		{
			for (x = 97; x <= 122; x++)

				_putchar(x);
		}
		_putchar('\n');
	}	}
