#include "holberton.h"
/**
 *_islower - checks for lowercase character.
 *@c: get value to be tested for lowercase validation
 *Return: 1 if is lowercase, 0 if not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
