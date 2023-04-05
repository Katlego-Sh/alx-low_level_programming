#include "main.h"
/**
 * _puts_recursion - puts with recurssion
 * @s: the input value
 * Return: at 0 always a success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
