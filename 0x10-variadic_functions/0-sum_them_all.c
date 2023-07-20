#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int Sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		Sum += va_arg(ptr, int);

	va_end(ptr);

	return (Sum);
}
