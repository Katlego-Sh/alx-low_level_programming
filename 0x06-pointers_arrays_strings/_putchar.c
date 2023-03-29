#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the printed character 
 * Return: always 1 on success
 * On error, -1 is returned and an error is set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
