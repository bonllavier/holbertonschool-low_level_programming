#include<stdio.h>
#include "holberton.h"
/**
 *reverse_array - compare to strings.
 *@a: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
void reverse_array(int *a, int n)
{
int x;
int t = 0;
int y = 0;
int u = (n / 2);
for (x = 0 ; x < u ; x++)
{
y = ((n - x) - 1);
t = a[x];
a[x] = a[y];
a[y] = t;
}
}
