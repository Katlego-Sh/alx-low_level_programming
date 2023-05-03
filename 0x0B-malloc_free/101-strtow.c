#include <stdlib.h>
#include "main.h"
/**
 * count_word - counts number of words in string
 * @s: the string that will be analysed
 * Return: the number of words
 */
int count_word(char *s)
{
	int x = 0;
	int c;
	int y = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			y++;
		}
	}
	return (y);
}
/**
 * **strtow - spereates string into words
 * @str: the string that will seperate
 * Return: pointer to array of strings when or NULL on fail
 */
char **strtow(char *str)
{
	char **matrix, *x;
	int i, a, b, c;
	int m = 0;
	int length = 0;
	int d = 0;

	while (*(str + length))
		length++;
	a = count_word(str);
	if (a == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (a + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				c = i;
				x = (char *) malloc(sizeof(char) * (d + 1));
				if (x == NULL)
					return (NULL);
				while (b < c)
					*x++ = str[b++];
				*x = '\0';
				matrix[m] = x - d;
				m++;
				d = 0;
			}
		}
		else if (d++ == 0)
			b = i;
	}
	matrix[m] = NULL;
	return (matrix);
}
