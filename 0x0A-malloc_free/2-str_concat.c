#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *str_concat - concat strings
 *@s1: string to copy.
 *@s2: dest.
 *Return: char.
 */
char *str_concat(char *s1, char *s2)
{
int cont, cont2;
int i, y = 0;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (cont = 0 ; *(s1 + cont) != '\0' ; cont++)
{
}
for (cont2 = 0 ; *(s2 + cont2) != '\0' ; cont2++)
{
}
ptr = malloc((cont + cont2) * sizeof(*ptr) + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < (cont + cont2); i++)
{
if (i < cont)
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[y];
y++;
}
}
return (ptr);
}
