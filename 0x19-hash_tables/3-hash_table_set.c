#include "hash_tables.h"
/**
 * hash_table_set - insert method
 *@ht: table
 *@key: key
 *@value: value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	int size;
	hash_table_t *head;
	hash_node_t *list;

	if (value == NULL || key == NULL ||
strcmp(key, "") == 0 || strcmp(value, "") == 0 || ht == NULL)
	{
		return (0);
	}
	head = ht;
	size = ht->size;
	hash = key_index((const unsigned char *)key, size);
	list  = head->array[hash];
	while (list != NULL)
	{
		if (!strcmp(list->key, key))
		{
			free(list->value);
			list->value = strdup(value);
			return (1);
		}
		list = list->next;
	}

	list = malloc(sizeof(hash_node_t) + strlen(key) + 1);
	if (list == NULL)
	{
		free(list);
		return (0);
	}
	list->key = strdup(key);
	list->value = strdup(value);

	list->next = head->array[hash];
	head->array[hash] = list;
	return (1);
}
