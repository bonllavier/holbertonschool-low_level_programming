#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

void reversePrint(listint_t** head_ref)
{
        listint_t *tail = *head_ref;

	while (tail->next != NULL) {
		tail = tail->next;
	}

	while (tail != NULL) {
		printf("%d, ", tail->n);
		tail = tail->prev;
	}
	printf("\n");
}
