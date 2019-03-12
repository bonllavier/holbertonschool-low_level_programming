#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - assignation
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
