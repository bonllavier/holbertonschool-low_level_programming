#include "holberton.h"
/**
 *_puts_recursion - print with recurssion.
 *@s: value to be evaluate.
 * Return: not.
 */
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s != '\0')
{
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
