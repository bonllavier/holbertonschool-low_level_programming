#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *_strdup - print with recurssion.
 *@str: string to copy.
 *Return: char.
 */
char *_strdup(char *str)
{
int i;
char *ptr;
if (str == NULL)
{
return (NULL);
}
ptr = malloc(sizeof(*str) * sizeof(*ptr));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; *(str + i) != '\0'; i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
}
