#include "main.h"
/**
 * puts2 -  prints every other character of a string.
 *@str: pointer to string.
 *Return: No return.
 */
void puts2(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}


