#include "main.h"

/**
 * print_triangle - prints a triangle.
 *@size: size of the triangle.
 *Return: No return.
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0 ; b <= size ; b++)
			{
				if ((a + b) < (size - 1))
					_putchar(' ');
				if ((a + b) >= size && a < size && b  <= size)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
