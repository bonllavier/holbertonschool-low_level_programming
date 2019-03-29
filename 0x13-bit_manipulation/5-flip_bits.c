#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *flip_bits - flip.
 *@n: number.
 *@m: m.
 *Return: number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number, i, var, result = 0;

	number = n ^ m;
	for (i = 0; number != 0; i++)
	{
		var = number & 1;
		number = number >> 1;
		if (var == 1)
		{
			result++;
		}
	}
	return (result);
}
