#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *list_len - lenght
 *@h: list
 *Return: number elements.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
