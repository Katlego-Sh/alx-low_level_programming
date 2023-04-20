#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: a variable number for the string to be printed
 * Desription: if seperator is NULL, it is not printed.
 * If one of the strings is NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int y;

	va_start(strings, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
