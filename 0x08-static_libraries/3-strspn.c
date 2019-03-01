#include<stdio.h>
#include "holberton.h"
/**
 *_strspn - get length.
 *@s: value to be evaluate.
 *@accept: value to be evaluate.
 *Return: not.
 */
unsigned int _strspn(char *s, char *accept)
{
  int x, y;
  int z = 0;
  int cont = 0;
  for (x = 0 ; *(s + x) != '\0' && z == 0 ; x++)
    {
      z = 1;
      for (y = 0 ; *(accept + y) != '\0' ; y++)
	{
	  if (accept[y] == s[x])
	    {
	      cont++;
	      z = 0;
	    }
	}
    }
  return (cont);
}
