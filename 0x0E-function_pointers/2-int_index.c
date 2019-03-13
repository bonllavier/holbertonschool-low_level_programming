#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - print dog
 *@array: string to copy.
 *@size: age.
 *@cmp: fucntion.
 *Return: not.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array != NULL && size != 0 && cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
for (x = 0 ; x < size ; x++)
{
if (cmp(array[x]) != 0)
{
return (x);
}
else if (x == size - 1)
{
return (-1);
}
}
}
return (-1);
}
