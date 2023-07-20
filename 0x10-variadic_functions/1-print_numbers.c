#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(str, int));
		if (i < n - 1)

			if (separator != NULL)

				printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}


