#include "main.h"
/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int mb;

	for (mb = 48; mb < 58; mb++)
	{
		_putchar(mb);
	}
	_putchar('\n');
}
