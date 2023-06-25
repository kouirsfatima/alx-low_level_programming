#include <stdlib.h>
#include <stdio.h>

/**
*main - Entry poiter
*
*Decription:  prints the alphabet in lowercase, and then in uppercase
*
* Return: alwyas 0 (succes)
*/
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
		putchar(x);
	for (x = 65; x <= 90; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
