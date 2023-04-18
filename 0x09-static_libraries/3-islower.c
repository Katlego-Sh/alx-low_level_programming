#include "main.h"
/**
 * _islower - this is the entry point 
 * @input: it takes in chat
 * Description: this function returns 1 or 0
 * Return: 1 is true 0 is false
 */
int _islower(int input)
{
	if (input >= 97 && input <= 122)
	{
		return (1);
	}
	return (0);
}
