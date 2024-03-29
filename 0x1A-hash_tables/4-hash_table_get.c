#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value of key
 * @ht: A pointer to the hash table.
 * @key: The key
 * Return: NULL or key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *x;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	x = ht->array[index];
	while (x && strcmp(x->key, key) != 0)
		x = x->next;

	return ((x == NULL) ? NULL : x->value);
}
