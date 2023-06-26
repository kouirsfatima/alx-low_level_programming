#include "main.h"
/**
 *_rev- prints a string, followed by a new line.
 *@s: prints a string, in reverse
 *Return: NO return.
 */
void print_rev(char *s)
{
	int i;                    
	int a = 0;
	while (*(s + a) != '\0')
		a++;
	for (i = a - 1; i >= 0; i--) 
	{
		_putchar(*(s + i));
	}
	_putchar('\n');


}
