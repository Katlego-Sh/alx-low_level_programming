#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: input stingeturn
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
