#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char let;
int i;
i = 0;
while (i < 10)
{
for (let = 'a'; let <= 'z'; let++)
{
_putchar(let);
}
_putchar('\n');
i++;
}
}
