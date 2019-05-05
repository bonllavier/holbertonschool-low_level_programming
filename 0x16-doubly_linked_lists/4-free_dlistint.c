#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_dlistint - free struct
 *@head: head
 *Return: address.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
