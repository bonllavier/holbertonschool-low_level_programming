#include "holberton.h"
/**
 *_abs - computes the absolute value of an integer.
 *@i: value to evaluate
 *Return: int
 */
int _abs(int i)
{
if (i < 0)
{
i = -i;
}
else
{
i = +i;
}
return (i);
}
