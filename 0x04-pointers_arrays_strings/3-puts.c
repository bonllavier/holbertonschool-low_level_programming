#include "holberton.h"
#include <unistd.h>
/**
 *_puts - print stdout.
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
int l = 0;
for (; l <= 63 ; l++)
{
_putchar(str[l]);
}
_putchar('\n');
}
