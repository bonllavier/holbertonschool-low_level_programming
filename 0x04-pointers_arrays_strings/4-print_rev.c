#include<stdio.h>
#include "holberton.h"
#include <unistd.h>
/**
 *print_rev - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
void print_rev(char *s)
{
int len = 0;
int l;
char *y = s;
while (*y != '\0')
{
y++;
len++;
}
l = len - 1;
for (; l >= 0 ; l--)
{
_putchar(s[l]);
}
_putchar('\n');
}
