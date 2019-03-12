#include "dog.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *new_dog - print dog
 *@name: string to copy.
 *@age: age.
 *@owner: owner.
*Return: dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_struct;
my_struct = malloc(sizeof(*my_struct));
if (my_struct == NULL || my_struct == 0)
{
return (NULL);
}
my_struct->name = name;
my_struct->age = age;
my_struct->owner = owner;
return (my_struct);
}
