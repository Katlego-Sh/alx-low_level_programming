#include "main.h"
/**
 * _isdigit - checks the input if the it is a digit or not
 * @c: input from a user
 * Return: value always 1 or 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);
	else
	return (0);
}
