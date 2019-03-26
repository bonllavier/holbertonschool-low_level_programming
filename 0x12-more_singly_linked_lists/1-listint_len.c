#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *listint_len - listlen
 *@h: list
 *Return: number elements.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
