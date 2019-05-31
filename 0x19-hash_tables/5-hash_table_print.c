#include "hash_tables.h"
/**
 * hash_table_print - print complete table
 *@ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht != NULL)
	{
		unsigned int i;
		int ver = 0;

		printf("{");
		for (i = 0; i < ht->size ; i++)
		{
			if (ver == 1 && ht->array[i] != NULL)
			{
				printf(", ");
			}
			if (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ver = 1;
			}
		}
		printf("}\n");
	}
	else
	{
	}
}
