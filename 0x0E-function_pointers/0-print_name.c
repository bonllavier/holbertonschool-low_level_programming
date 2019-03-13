#include "function_pointers.h"
/**
 *print_name - print dog
 *@name: string to copy.
 *@f: age.
 *Return: not.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
