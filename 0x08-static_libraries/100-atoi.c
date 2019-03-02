#include "holberton.h"
/**
 *_atoi - checks for a digit (0 through 9).
 *@s: value to be validate.
 *Return: int.
 */
int _atoi(char *s)
{
  short boolean;
  int i, minus, result;

  i = minus = result = boolean = 0;
  minus = -1;

  while (s[i] != '\0')
    {
      if (s[i] == '-')
	minus *= -1;

      if (s[i] >= '0' && s[i] <= '9')
	{
	  result *= 10;
	  result -= (s[i] - '0');
	  boolean = 1;
	}
      else if (boolean == 1)
	break;
      i++;
    }
  result *= minus;
  return (result);
}
