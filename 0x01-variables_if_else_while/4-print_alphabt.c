#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry poiter
*
*Decription :  prints the alphabet in lowercase, followed by a new line
*
* Return: Alwyas 0 (success)
*/
int main(void)
{
	char a;

	for (a = 97 ; a <= 122 ; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
	putchar(a);
	}
	putchar('\n');
return (0);
}
