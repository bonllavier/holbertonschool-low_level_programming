#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint - free numbers
 *@head: head
 *Return: not.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
