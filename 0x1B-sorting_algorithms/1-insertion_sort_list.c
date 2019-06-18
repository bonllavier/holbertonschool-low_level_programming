#include "sort.h"

/**
 *insertion_sort_list - insert
 *@list: list
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;
	listint_t *runner = *list;
	int size = 0;
	int tmp_ant = 0;
	listint_t *tmpp_prev = NULL;
	listint_t *tmpac_next = NULL;
	listint_t *tmpac_prev = NULL;
	int pos = 0;

	if (list != NULL)
	{
		while (tmp != NULL)
		{
			tmp = tmp->next;
			size++;
		}
		if (size >= 2)
		{
			while(runner != '\0')
			{
				if (tmp_ant > runner->n)
				{
					if(pos > 1)
					{
						tmpp_prev = runner->prev->prev;
					}
					else
					{
						tmpp_prev = NULL;
					}
					/*printf("%d tmpp_prev\n", tmpp_prev->n);*/
					tmpac_next = runner->next;
					/*printf("%d tmpac_next\n", tmpac_next->n);*/
					tmpac_prev = runner->prev;
					/*printf("%d tmpac_prev\n", tmpac_prev->n);*/

					runner->prev = tmpp_prev;
					runner->next = tmpac_prev;

					tmpac_prev->next = tmpac_next;
					tmpac_prev->prev = runner;

					tmpp_prev->next = runner;
					tmpac_next->prev = tmpac_prev;
					print_list(*list);
					runner = *list;
					pos = 0;
				}
				printf("pos: %d\n", pos);
				pos++;
				tmp_ant = runner->n;
				runner = runner->next;
			}
		}
	}
/*	printf("%d", size);*/
}
