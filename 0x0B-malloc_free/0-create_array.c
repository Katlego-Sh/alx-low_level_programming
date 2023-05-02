#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of array
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
	a[b] = c;
	}
	return (a);
}
