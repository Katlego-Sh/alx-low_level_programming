#include "main.h"
/**
 * _strchr - The entry point
 * @s: an input value
 * @c: an input value
 * Return: at 0 is always (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
