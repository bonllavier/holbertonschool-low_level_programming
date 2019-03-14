#include<stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - print
 *@argc: string to copy.
 *@argv: size.
 *Return: not.
 */
int main(int argc, char *argv[])
{
int num1 = 0;
int num2 = 0;
int (*ptr2)(int,  int);
int res = 0;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((atoi(argv[1]) == 0 || atoi(argv[3]) == 0))
{
if ((int)*argv[2] == 47 || (int)*argv[2] == 37)
{
printf("Error\n");
exit(100);
}
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
ptr2 = get_op_func(argv[2]);
res = ptr2(num1, num2);
printf("%d\n", res);
return (0);
}
