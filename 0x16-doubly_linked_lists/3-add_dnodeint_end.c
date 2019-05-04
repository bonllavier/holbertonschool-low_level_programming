#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_dnodeint_end - put new end
 *@head: head
 *@n: data.
 *Return: address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));
	dlistint_t *fast_iter = *head;

	if (new_tail == NULL)
	{
		free(new_tail);
		return (0);
	}
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
		return (*head);
	}
	while (fast_iter->next != NULL)
	{
		fast_iter = fast_iter->next;
	}
	fast_iter->next = new_tail;
	return (*head);
}
