#include<stdio.h>
#include "holberton.h"
/**
 *print_diagsums - search set bytes.
 *@a: value to be evaluate.
 *@size: value to be evaluate.
 *Return: not.
 */
void print_diagsums(int *a, int size)
{
int x = 0;
int sum = 0;
int sum2 = 0;
for (x = 0 ; x < (size * size) ; x += (size + 1))
{
sum = sum + a[x];
}
for (x = (size - 1) ; x < (size * size - 1) ; x += (size - 1))
{
sum2 = sum2 + a[x];
}
printf("%d, %d\n", sum, sum2);
}
