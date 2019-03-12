#include "dog.h"
/**
 *init_dog - init dog
 *@d: string to copy.
 *@name: height.
 *@age: size.
 *@owner: owner.
 *Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
