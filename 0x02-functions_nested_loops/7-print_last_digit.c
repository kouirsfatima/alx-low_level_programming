#include "main.h"
/**
 * print_last_digit - print last digit of a number.
 *
 *@m: number.
 *
 *Return: last digit.
 */
int print_last_digit(int m)
{
	int last_digit;

	last_digit = m % 10;

	if (m < 0)
		last_digit *= -1;
	_putchar(48 + last_digit);
	return (last_digit);
}
