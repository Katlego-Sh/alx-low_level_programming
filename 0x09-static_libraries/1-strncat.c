#include "main.h"
/**
 * _strncat - entry level
 * @dest: input form user
 * @src: input from user
 * @n: input from user
 * Retrun: brings back a character always
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter;
	int i;

	for (counter = 0; dest[counter] != '\0'; counter++)
		counter++;
	for (i = 0; i < n && src[i]; i++)
		dest[counter + i] = src[i];
	return (dest);
}
