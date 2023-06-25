#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poiter
 *
 *Decription : prints all the numbers of base 16 in lowercase.
 *
 *Return: alwyas 0 (success)
 */
int main(void)
{
	int s;

	for (s = 48 ; s <= 57 ; s++)
		putchar(s);
	for (s = 97 ; s <= 102 ; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
