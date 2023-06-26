#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: The first variable.
 * @b: The second variable.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
