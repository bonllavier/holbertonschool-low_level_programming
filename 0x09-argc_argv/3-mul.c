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
if (argv[1] != NULL)
{
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
}
else
{
printf("Error\n");
}
(void)argc;
return (0);
}
