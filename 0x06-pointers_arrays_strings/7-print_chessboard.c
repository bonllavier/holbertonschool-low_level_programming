#include<stdio.h>
#include "holberton.h"
/**
 *print_chessboard - print chess.
 *@a: value to be evaluate.
 *Return: char.
 */
void print_chessboard(char (*a)[8])
{
int x;
int y;
for (y = 0 ; y < 8 ; y++)
{
for (x = 0 ; x < 8 ; x++)
{
_putchar(a[y][x]);
}
_putchar('\n');
}
}
