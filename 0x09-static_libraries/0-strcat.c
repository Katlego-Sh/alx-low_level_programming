#include "main.h"
/**
 * _strcat - entry level
 * @dest: input form user
 * @src: input from user
 * Return: bring a character
 */
char *_strcat(char *dest, char *src)
{
	int counter;
	int i;

	for (counter = 0; dest[counter] != '\0'; counter++)

			counter++;
	for (i = 0; src[i]; i++)
		dest[counter + i] = src[i];

	return (dest);
}
