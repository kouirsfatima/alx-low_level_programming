#include "main.h"
/**
 * print_most_numbers - prints numbers o to 9 Do not print 2 and 4
 * Return: no return.
 */
void print_most_numbers(void)
{
	int mb;

	for (mb = 0; mb <=  9; mb++)
	{
		if (mb == 2 || mb == 4)
			continue;
		_putchar(mb + 48);
	}
	_putchar('\n');
}
