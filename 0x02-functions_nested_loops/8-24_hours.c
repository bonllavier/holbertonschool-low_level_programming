#include "holberton.h"
/**
 *jack_bauer - prints every minute of the day
 *
 *Return: nothing.
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
while (h <= 23)
{
_putchar((h / 10) % 10 + '0');
_putchar((h % 10) % 10 + '0');
_putchar(':');
_putchar((m / 10) % 10 + '0');
_putchar((m % 10) % 10 + '0');
_putchar('\n');
m++;
if (m == 60)
{
h++;
m = 0;
}
}
}
