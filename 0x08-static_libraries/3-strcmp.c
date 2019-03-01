#include<stdio.h>
#include "holberton.h"
/**
 *_strcmp - compare to strings.
 *@s1: value to be evaluate.
 *@s2: value to be evaluate.
 *Return: not.
 */
int _strcmp(char *s1, char *s2)
{
  int x;
  int l = 0;
  int y;
  int conte = 0;
  while (*(s1 + l) != '\0')
    {
      l++;
    }
  l = l;
  for (x = 0 ; x < l ; x++)
    {
      y = s1[x] - s2[x];
      if (y != 0)
	{
	  return (y);
	}
      if (y == 0)
	{
	  conte++;
	}
      if (conte == l)
	{
	  return (0);
	}
    }
  return (0);
}
