#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reajocc
 * @ptr: original pointer
 * @old_size: old man
 * @new_size: new man
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptr = malloc(new_size * sizeof(char));
if (ptr == NULL || ptr == 0)
{
free(ptr);
return (NULL);
}
return (ptr);
}
