#include "main.h"
/**
 * _isupper - checks the input if it is upper or not
 * @c: input form user
 * Return: must be 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
