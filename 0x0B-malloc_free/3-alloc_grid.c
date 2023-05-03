#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - uses a nested  loop to make grit
 * @height: the hight
 * @width: the width
 * Return: pointer to a 2 dimensional array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int x, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (i = 0; i < width; i++)
			a[x][i] = 0;
	}
	return (a);
}
