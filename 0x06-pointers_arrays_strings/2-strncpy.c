#include "main.h"
/**
 * _strncpy - this will copy a string
 * @dest: functions to input value
 * @src: functions to input value
 * @n: functions to input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

