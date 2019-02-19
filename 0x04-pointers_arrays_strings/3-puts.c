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
 while (*(str + l) != '\0')
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
