#include "holberton.h"
/**
 *factorial - print with recurssion.
 *@n: value to be evaluate.
 *Return: int.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
