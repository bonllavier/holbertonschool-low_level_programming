#include<stdio.h>
#include <stdlib.h>
/**
 *main - main.
 *@argc: value to be evaluate.
 *@argv: value to be evaluate.
 *Return: 0.
 */
int main(int argc, char **argv)
{
int a = 0;
int b = 0;
if (argc > 2)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
else
{
printf("Error\n");
}
return (0);
}
