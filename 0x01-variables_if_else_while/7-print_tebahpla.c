#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poiter
 *
 *Decription : prints the lowercase alphabet in reverse, followed by a new line
 *
 *Return: alwyas 0 (success)
 */
int main(void)
{
	int w;

	for (w = 122 ; w >= 97; w--)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
