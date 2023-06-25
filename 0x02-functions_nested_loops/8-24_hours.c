#include "main.h"
/**
 * jack_bauer - starting from 00:00 to 23:59.
 *
 *Return: NO return.
 */
void jack_bauer(void)
{
	int n, m, k, h;

	for (n = 0 ; n <= 2 ; n++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			if (n == 2 && m == 4)
				break;
			for (k = 0 ; k <= 5 ; k++)
			{
				for (h = 0 ; h <= 9 ; h++)
				{
					_putchar(n + 48);
					_putchar(m + 48);
					_putchar(':');
					_putchar(k + 48);
					_putchar(h + 48);
					_putchar('\n');
				}
			}
		}
	}
}
