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
	int mask = 1;
	int result = 0;

	if (n > 0)
	{
		while (mask <= (int)n)
		{
			if (n & mask)
			{
				result = (result << 1) | 1;
			}
			else
			{
				result <<= 1;
			}

			mask <<= 1;
		}
	}

	if (result == 0)

		_putchar('0');
}
