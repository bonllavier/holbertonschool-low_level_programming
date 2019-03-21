#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_list - print list
 *@h: list
 *Return: number elements.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s", h->len, h->str);
		}
		else if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		printf("\n");
		h = h->next;
		i++;
	}
	return (i);
}
