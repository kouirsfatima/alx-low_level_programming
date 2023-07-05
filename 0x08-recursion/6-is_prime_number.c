#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @i: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(int i,  int n)
{
	if (i % n == 0)
	{
		if (i == n)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(i, n + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
