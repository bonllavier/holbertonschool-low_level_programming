#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *get_nodeint_at_index - getnode
 *@head: head
 *@index: index
 *Return: address.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0 ; i < index ; i++)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
