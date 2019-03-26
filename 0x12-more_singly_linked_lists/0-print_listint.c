#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_listint - print list int
 *@h: list
 *Return: number elements.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		i++;
	}
	return (i);
}
