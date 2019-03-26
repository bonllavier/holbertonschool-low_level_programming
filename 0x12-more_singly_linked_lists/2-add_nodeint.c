#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_nodeint - add head
 *@head: list
 *@n: param.
 *Return: number elements.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (0);
	}
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
