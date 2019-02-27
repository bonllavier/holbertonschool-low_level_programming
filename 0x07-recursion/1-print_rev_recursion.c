#include "holberton.h"
/**
 *_print_rev_recursion - print rev recurssion.
 *@s: value to be evaluate.
 *Return: not.
 */
void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
