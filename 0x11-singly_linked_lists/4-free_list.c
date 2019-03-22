#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - put new head
 *@head: head
 *Return: address.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
