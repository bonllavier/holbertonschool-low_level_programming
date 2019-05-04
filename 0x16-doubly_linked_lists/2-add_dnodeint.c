#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_dnodeint - print list
 *@head: list
 *@n: data
 *Return: number elements.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_head;
	}
	*head = new_head;
	return (new_head);
}
