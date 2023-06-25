#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poiter
 *
 *Decription : prints all possible combinations of single-digit numbers.
 *
 *Return: alwyas 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
