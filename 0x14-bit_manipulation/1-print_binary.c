#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int j, k, a;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		j = i;
		a = 1 << j;
		k = n & a;

		if (k == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}
