#include "dog.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *print_dog - print dog
 *@d: string to copy.
 *Return: void.
 */
void print_dog(struct dog *d)
{
if (d)
{
if ((*d).name != 0)
{
printf("Name: %s\n", (*d).name);
}
else
{
printf("%p\n", (*d).name);
}
if ((*d).age != 0)
{
printf("Age: %.6f\n", (*d).age);
}
else
{
printf("(nil)\n");
}
if ((*d).owner != 0)
{
printf("Owner: %s\n", (*d).owner);
}
else
{
printf("%p\n", (*d).owner);
}
}
else
{
}
}
