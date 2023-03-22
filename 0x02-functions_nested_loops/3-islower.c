#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @m: The character to be checked
 * Return: 1 for  lowercase character or 0 for anything else
 */
int _islower(int m)
{
	if (m >= 97 && m <= 122)
	{
	return (1);
	}
	return (0);
}
