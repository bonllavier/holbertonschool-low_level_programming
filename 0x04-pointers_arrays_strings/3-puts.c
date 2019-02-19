#include<stdio.h>
#include "holberton.h"
#include <unistd.h>
/**
 *_puts - print stdout.
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
write(1, str, 63);
_putchar('\n');
}
