#include "main.h"
/**
 * power_square - helper function to calculate the square of a number.
 * @n: input number.
 * @c: current value of the square.
 * Return: square of the number.
 */
int power_square(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_square(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root or -1 if the number has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (power_square(n, 1));
}
