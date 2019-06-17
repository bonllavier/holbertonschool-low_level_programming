#include "hash_tables.h"
/**
 * key_index - get index
 * @key: address of the stack.
 * @size: number of line.
 * Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
