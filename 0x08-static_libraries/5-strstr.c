#include<stdio.h>
#include "holberton.h"
/**
 *_strstr - compare to strings.
 *@haystack: value to be evaluate.
 *@needle: value to be evaluate.
 *Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
  int x = 0;
  int y = 0;
  for (x = 0 ; *(haystack + x) != '\0' ; x++)
    {
      if (haystack[x] == needle[y])
	{
	  return (haystack + x);
	}
    }
  if (haystack[x] == needle[y])
    {
      return (haystack + x);
    }
  return (NULL);
}
