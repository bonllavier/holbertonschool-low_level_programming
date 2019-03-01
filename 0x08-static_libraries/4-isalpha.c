#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character.
 *@c: get value to be tested for alphabetic character validation
 *Return: 1 if is c lowercase, 0 if not.
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
