#include "hash_tables.h"
/**
 * hash_table_create - create hash
 *@size: size
 * Return: Always 0 (Success)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size < 1)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht->array);
		return (NULL);
	}
	return (ht);
}
