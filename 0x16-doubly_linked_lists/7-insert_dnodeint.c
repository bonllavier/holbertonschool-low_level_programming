#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - insert at index
 *@h: head
 *@idx: index
 *@n: data
 *Return: address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_head = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	dlistint_t *chekernull = *h;

	if (h == NULL)
		return (0);
	if (new_head == NULL)
	{ free(new_head);
		return (0); }
	if (idx > 0)
	{
		for (i = 0 ; i < idx ; i++)
		{
			if (chekernull->next == NULL)
			{
				return (NULL);
			}
			if ((i + 1) == idx)
			{
				new_head->n = n;
				new_head->next = (tmp)->next;
				new_head->prev = tmp;
				(tmp)->next = new_head;
				return (new_head);
			}
			tmp = (tmp)->next;
		}
	}
	else if (idx == 0)
	{ new_head->n = n;
		new_head->next = (tmp);
		new_head->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_head;
		(*h) = new_head;
		return (new_head); }
	free(new_head);
	return (NULL);
}
