#include "holberton.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int x;
int y;
for (y = 0 ; y <= 9 ; y++)
{
for (x = 'a' ; x <= 'z' ; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
