#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *get_bit - recur
 *@n: number.
 *@index: index
 *Return: number.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return (n >> index & 1);
	}
	return (-1);
}
