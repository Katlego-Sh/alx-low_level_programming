#include "main.h"
/**
 * _memset - adds a particular value to a block of memory
 * @s: fills the block of memeory
 * @b: a constant value
 * @n: bytes to be changed
 * Return: 0 always (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
