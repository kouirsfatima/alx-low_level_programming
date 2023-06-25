#include "main.h"
/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, mb;

	for (i = 0; i < 10; i++)
	{
		for (mb = 0; mb < 15; mb++)
		{
			if (mb >= 10)
				_putchar(mb / 10 + 48);
			_putchar(mb % 10 + 48);
		}
		_putchar('\n');
	}
}
