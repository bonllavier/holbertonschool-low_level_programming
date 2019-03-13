#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - print dog
 *@name: string to copy.
 *@f: age.
 *Return: not.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
{
f(name);
}
}
