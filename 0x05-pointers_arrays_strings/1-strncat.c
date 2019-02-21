#include<stdio.h>
#include "holberton.h"
/**
 *_strncat - limit presentation.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
char *_strncat(char *dest, char *src, int n)
{
int l = 0;
int x = 0;
int y = 0;
int tl = 0;
while (*(dest + l) != '\0')
{
l++;
}
l = l - 1;
for (x = l ; *(src + y) != '\0' ; x++)
{
dest[x + 1] = src[y];
if (y < n)
{
y++;
}
else
{
break;
}
}
tl = l + y;
dest[tl + 1] = '\0';
return (dest);
}
