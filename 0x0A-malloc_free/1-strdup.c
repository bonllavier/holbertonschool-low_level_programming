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
int cont;
char *ptr;
if (str == NULL || str == 0)
{
return (NULL);
}
for (cont = 0 ; *(str + cont) != '\0' ; cont++)
{
}
ptr = malloc(cont * sizeof(*ptr));
if (ptr == NULL || str == NULL)
{
return (NULL);
}
for (i = 0 ; i < cont; i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
}
