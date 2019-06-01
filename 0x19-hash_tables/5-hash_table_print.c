#include "hash_tables.h"
/**
 * hash_table_print - print complete table
 *@ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}
	{
		hash_node_t *head;
		unsigned int i;
		int ver = 0;

		printf("{");
		for (i = 0; i < ht->size ; i++)
		{
			if (ht->array[i] != NULL)
			{
				head = ht->array[i];
				while (head != NULL)
				{
					if (ver == 1)
					{
						printf(", ");
					}
					printf("'%s': '%s'", head->key, head->value);
					ver = 1;
					head = head->next;
				}
			}
		}
		printf("}\n");
	}
}
