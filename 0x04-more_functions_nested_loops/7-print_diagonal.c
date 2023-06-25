#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n:  is the number of times the character \.
 * Return: No return.
 */
void print_diagonal(int n)
{
	int i, f;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (f = 0; f < i; f++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
