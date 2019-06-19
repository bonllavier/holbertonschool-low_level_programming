#include "sort.h"

/**
 *insertion_sort_list - insert
 *@list: list
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	int size = 0, tmp_ant = 0, pos = 0;
	listint_t *tmpp_prev, *tmpac_next, *tmpac_prev, *tmp, *runner;

	if (list)
	{ tmp = *list, runner = *list; }
	else
	{ return; }
	size = get_list_size(tmp);
	if (list != NULL && size >= 2)
	{
		while (runner != NULL)
		{
			if (tmp_ant > runner->n)
			{
				if (pos > 1)
				{ tmpp_prev = runner->prev->prev; }
				else
				{ tmpp_prev = (*list)->prev; }
				if (pos < (size - 1))
				{ tmpac_next = runner->next; }
				else
				{ tmpac_next = NULL; }
				tmpac_prev = runner->prev;
				runner->next = tmpac_prev;
				runner->prev = tmpp_prev;
				tmpac_prev->next = tmpac_next;
				tmpac_prev->prev = runner;
				if (pos > 1)
				{ tmpp_prev->next = runner; }
				else
				{ *list = runner; }
				if (pos < (size - 1))
				{ tmpac_next->prev = tmpac_prev; }
				print_list(*list);
				runner = *list;
				pos = 0; }
			pos++;
			tmp_ant = runner->n;
			runner = runner->next; }
	}
}
/**
 *get_list_size - insert
 *@tmp: list
 * Return: int
 */
int get_list_size(listint_t *tmp)
{
	int size = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
