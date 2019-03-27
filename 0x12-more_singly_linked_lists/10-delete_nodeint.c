#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delete at index.
 *@head: head
 *@index: index
 *Return: address.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *tmp2 = *head;
	listint_t *chekernull = *head;
	listint_t *ptrfree = *head;

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
		free(tmp);
		return (1);
	}
	return (-1);
}
