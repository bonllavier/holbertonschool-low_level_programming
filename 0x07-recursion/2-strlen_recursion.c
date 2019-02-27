#include "holberton.h"
/**
 *_strlen_recursion - print with recurssion.
 *@s: value to be evaluate.
 *Return: not.
 */
int _strlen_recursion(char *s)
{
int y = 0;
if (*s != '\0')
{
s++;
y = (_strlen_recursion(s) + 1);
}
return (y);
}
