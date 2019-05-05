#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index - print list
 *@head: list
 *@index: index to delete
 *Return: number elements.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
        dlistint_t *tmp = *head;
	dlistint_t *tmp2 = *head;
	dlistint_t *chekernull = *head;
	dlistint_t *ptrfree = *head;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index > 0)
	{
		for (i = 0 ; i < index ; i++)
		{
			ptrfree = (ptrfree)->next;
			if (chekernull == NULL || chekernull->next == NULL)
			{
				return (-1);
			}
			if ((i + 1) == index)
			{
				tmp->next = tmp2->next->next;
				tmp2->prev = tmp;
				free((ptrfree));
				return (1);
			}
			tmp = (tmp)->next;
			tmp2 = (tmp2)->next;
		}
	}
	else if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	return (-1);
}
