#include "main.h"
/**
 * _strlen - entry level
 * @s: input form user
 * Return: integer is always returned
 */
int _strlen(char *s)
{
	int iter;

	for (iter = 0; s[iter] != '\0';)
	{
		iter++;
	}
	return (iter);
}
