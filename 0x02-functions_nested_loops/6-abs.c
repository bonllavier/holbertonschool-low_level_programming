#include "holberton.h"
/**
 *_abs - computes the absolute value of an integer.
 *@c: get value to be tested for lowercase validation
 *Return: int
 */
int _abs(int i)
{
  if (i<0)
    {
      i=-i;
    }
  else
    {
      i=+i;
    }
  return (i);
}
