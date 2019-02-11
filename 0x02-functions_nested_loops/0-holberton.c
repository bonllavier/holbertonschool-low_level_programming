#include "holberton.h"
#include <stdio.h>

/**
 *main-prints out Holberton, followed by new line
 *
 *Return: 0
 */
int main(void)
{
int i;
char st[9] = "Holberton";
for (i = 0 ; i <= 9 ; i++)
{
_putchar(st[i]);
}
_putchar('\n');
return (0);
}
