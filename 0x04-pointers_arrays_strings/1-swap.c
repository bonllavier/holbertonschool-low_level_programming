#include<stdio.h>
#include "holberton.h"
/**
 *swap_int - swap values.
 *@a: value to be evaluate.
 *@b: value to be evaluate.
 *Return: not.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
