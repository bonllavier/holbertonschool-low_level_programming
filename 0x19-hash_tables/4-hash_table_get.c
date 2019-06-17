#include "hash_tables.h"
/**
 * hash_table_get - check the code for Holberton School students.
 *@ht: table
 *@key: key
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *list;
	int size;
/*	hash_table_t *head;*/
	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
	{
		return (NULL);
	}
/*	head = ht;*/
	size = ht->size;
	hash = key_index((const unsigned char *)key, size);
	list = ht->array[hash];
	while (list != NULL)
	{
		if (!strcmp(list->key, key))
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
