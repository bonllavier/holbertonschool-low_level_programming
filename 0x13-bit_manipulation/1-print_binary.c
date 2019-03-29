#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *div_recursi - recur
 *@n: number.
 *Return: number.
 */
void div_recursi(unsigned long int n)
{
	if (n != 0)
	{
		div_recursi(n >> 1);
		_putchar((n & 1) + '0');
	}
}
/**
 *print_binary - print bin
 *@n: number.
 *Return: number.
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		div_recursi(n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
