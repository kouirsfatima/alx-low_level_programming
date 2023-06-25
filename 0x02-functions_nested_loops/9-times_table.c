#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{

	int a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(48);
		for (b = 1 ; b  <= 9 ; b++)
		{
			_putchar(',');
			_putchar(' ');
			if ((a * b) <= 9)
				_putchar(' ');
			else
				_putchar((a * b) / 10 + 48);
			_putchar((a * b) % 10 + 48);
		}
		_putchar('\n');
	}
}
