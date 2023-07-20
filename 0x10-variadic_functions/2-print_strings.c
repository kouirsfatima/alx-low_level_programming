#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *s;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char*);

		if (s != NULL)
		{
			printf("%s", s);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		else
		{

			printf("nil");


			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(ptr);
	printf("\n");
}
