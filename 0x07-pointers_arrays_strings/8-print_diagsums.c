#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input value
 * @size: input value
 * Return: at 0 always success
 */
void print_diagsums(int *a, int size)
{
	int total1, total2, x;

	total1 = 0;
	total2 = 0;

	for (x = 0; x < size; x++)
	{
		total1 = total1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		total2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", total1, total2);
}
