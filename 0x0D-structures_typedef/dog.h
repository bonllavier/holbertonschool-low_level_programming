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
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
