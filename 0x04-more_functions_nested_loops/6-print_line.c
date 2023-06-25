#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *@n:var for print number of _.
 *Return: No return.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
