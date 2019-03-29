#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *clear_bit - set values to 0.
 *@n: number.
 *@index: index.
 *Return: number.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
