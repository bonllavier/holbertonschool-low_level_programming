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
if (argc > 2)
{
int t;
for (t = 1 ; t < (argc) ; t++)
{
if (isdigit(*argv[t]))
{
sum = sum + atoi(argv[t]);
}
else
{
printf("Error\n");
conf = 1;
return (1);
}
}
if (conf == 0)
{
printf("%d\n", sum);
}
}
else
{
printf("%d\n", 0);
}
return (0);
}
