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
	 int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
