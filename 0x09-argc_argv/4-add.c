#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds pos.
 *@argc: value to be evaluate.
 *@argv: value to be evaluate.
 *Return: 0.
 */
int main(int argc, char **argv)
{
int sum = 0;
int conf = 0;
int t;
int b;
for (t = 1 ; t < (argc) ; t++)
{
for (b = 0; argv[t][b] != '\0'; b++)
{
if (!isdigit(argv[t][b]))
{
conf = 1;
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[t]);
}
if (conf == 0)
{
printf("%d\n", sum);
}
return (0);
}
