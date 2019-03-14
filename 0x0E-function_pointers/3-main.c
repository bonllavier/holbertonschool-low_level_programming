#include<stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 *main - print
 *@argc: string to copy.
 *@argv: size.
 *Return: not.
 */
int main(int argc, char *argv[])
{
char *sign;
char operator;
int num1 = 0;
int num2 = 0;
int (*ptr2)(int,  int);
int res = 0;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
operator = argv[2][0];
if ((operator != '*' && operator != '+' && operator != '-'
&& operator != '/'  && operator != '%') || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((operator == '/' || operator == '%') && (num1 == 0 || num2 == 0))
{
printf("Error\n");
exit(100);
}
sign = argv[2];
ptr2 = get_op_func(sign);
res = (*ptr2)(num1, num2);
printf("%d\n", res);
return (0);
}
