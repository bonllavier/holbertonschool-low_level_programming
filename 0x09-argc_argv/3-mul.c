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
if (argv[1] != NULL)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
else
{
printf("Error\n");
}
(void)argc;
return (0);
}
