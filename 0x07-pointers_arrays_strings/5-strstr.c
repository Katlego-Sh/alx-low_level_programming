#include "main.h"
/**
 * _strstr - The entry point
 * @haystack: the input value
 * @needle: the input value
 * Return: at 0 always success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}