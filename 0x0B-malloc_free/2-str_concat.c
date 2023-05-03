#include <stdlib.h>
#include "main.h"
/**
 * str_concat - functions to concatenates two strings
 * @s1: the string to be concatinated
 * @s2: second string to concatinate
 * Return: pointer to string when successful or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	s3 = malloc(sizeof(char) * (length1 + length2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < length1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (length1 + length2))
		{
			s3[i] = s2[x];
			i++;
			x++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
