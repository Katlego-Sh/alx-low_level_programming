#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string to new memory location
 * @str: assigned char
 * Return: pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *m;
	int i = 0;
	int  a = 0;

	if (str == NULL)
	return (NULL);
	while (str[i] != '\0')
	i++;
	m = malloc(sizeof(char) * (i + 1));
	if (m == NULL)
	return (NULL);
	for (a = 0; str[a]; a++)
	m[a] = str[a];
	return (m);
}
