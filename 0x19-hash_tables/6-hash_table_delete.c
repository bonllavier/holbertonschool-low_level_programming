#include "hash_tables.h"

/**
 * hash_table_delete - delete all hash
 * @ht: table
 *
 * Return: the index of the key
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *head;
	hash_node_t *prev;

	for (i = 0 ; i < (ht->size) ; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			for (; head != NULL; )
			{
				prev = head;
				head = head->next;
				free(prev->key);
				free(prev->value);
				free(prev);
			}
		}
	}
	free(ht->array);
	free(ht);
}
