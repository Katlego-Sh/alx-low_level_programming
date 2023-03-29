#include "main.h"
/**
 * reverse_array - reverses the array of integers
 * @a: the array
 * @n: the number of elements for the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
