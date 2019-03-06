#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *argstostr - adds pos.
 *@ac: value to be evaluate.
 *@av: value to be evaluate.
 *Return: 0.
 */
char *argstostr(int ac, char **av)
{
char *ptr;
int cont1 = 0;
int cont2 = 0;
int t, i;
int y, r;
if (ac == 0 || av == NULL)
{
return (NULL);
}
ptr = malloc(ac * sizeof(*ptr));
for (t = 0 ; t < ac ; t++)
{
for (i = 0 ; av[t][i] != '\0'; i++)
{
cont1++;
}
cont1++;
}
ptr = malloc(cont1 *sizeof(*ptr));
if (ptr == NULL)
{
return (NULL);
}
for (y = 0 ; y < ac ; y++)
{
for (r = 0 ; av[y][r] != '\0'; r++)
{
ptr[cont2++] = av[y][r];
}
ptr[cont2++] = '\n';
}
ptr[cont2] = '\0';
return (ptr);
}
