#include "holberton.h"
/**
 *print_last_digit - checks for lowercase character.
 *@c: get value to be used for get the last digit
 *Return: int.
 */
int print_last_digit(int c)
{
c = (c % 10);
if (c < 0)
{
c = c * -1;
}
_putchar(c + '0');
return (c);
}
