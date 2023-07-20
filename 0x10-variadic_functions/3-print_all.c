#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	int integer;
	float flt;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{  case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
			case 'i':
			integer = va_arg(args, int);
			printf("%d", integer);
			break;
			case 'f':
			flt = va_arg(args, double);
			printf("%f", flt);
			break;
			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			switch
				printf("%s", str);
			break;
			default:
			break;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
