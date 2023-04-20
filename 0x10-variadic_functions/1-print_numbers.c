#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers then new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to function
 * @...: variable number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int y;

	va_start(nums, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(nums, int));

		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
