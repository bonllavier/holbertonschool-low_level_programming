#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *dlistint_len - print lenght list
 *@h: list
 *Return: number elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
