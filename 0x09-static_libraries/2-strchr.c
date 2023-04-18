#include "main.h"
#include <stddef.h>
/**
 * _strchr - enter level
 * @s: array input
 * @c: char input
 * Retrun: returns a pointer to char 
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
