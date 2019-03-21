#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - put new head
 *@head: head
 *@str: string.
 *Return: address.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (0);
	}
	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
	}
	new_head->str = strdup(str);
	new_head->len = i;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
