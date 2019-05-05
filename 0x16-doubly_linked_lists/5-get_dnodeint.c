#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - get node at index
 *@head: head
 *@index: index
 *Return: address.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0 ; i < index ; i++)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
