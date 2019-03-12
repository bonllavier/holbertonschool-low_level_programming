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
int x, y = 0;
dog_t *my_struct;
char *newname;
char *newowner;
for (x = 0 ; *(name + x) != 0 ; x++)
;
newname = malloc(x * sizeof(*newname) + 1);
if (newname == NULL || newname == 0)
{
free(newname);
return (NULL);
}
for (x = 0 ; *(name + x) != 0 ; x++)
{
newname[x] = name[x];
}
newname[x] = '\0';
for (y = 0 ; *(owner + y) != 0 ; y++)
;
newowner = malloc(y * sizeof(*newowner) + 1);
if (newowner == NULL || newowner == 0)
{
free(newowner);
return (NULL);
}
for (y = 0 ; *(owner + y) != 0 ; y++)
{
newowner[y] = owner[y];
}
newowner[y] = '\0';
my_struct = malloc(sizeof(*my_struct));
if (my_struct == NULL || my_struct == 0)
{
free(my_struct);
return (NULL);
}
my_struct->name = newname;
my_struct->age = age;
my_struct->owner = newowner;
return (my_struct);
}
