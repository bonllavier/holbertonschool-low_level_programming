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
	char *str2 = strdup(str);
	list_t *new_head = (list_t *) malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		free(new_head);
		return (0);
	}
	for (i = 0 ; *(str2 + i) != '\0' ; i++)
	{
	}
	new_head->str = str2;
	new_head->len = i;
	new_head->next = (*head);
	(*head) = new_head;
	return (*head);
}
