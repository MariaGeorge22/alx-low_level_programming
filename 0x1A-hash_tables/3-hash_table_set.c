#include "hash_tables.h"
#include <stdio.h>
#define FAIL 0
#define SUCCESS 1
/**
 * hash_table_set - hash function
 * @ht: hash table
 * @key: key in table
 * @value: value in table
 *
 * adds an element to the hash table.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (strlen(key) == 0 || ht == NULL ||
		key == NULL || value == NULL)
		return (FAIL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = (strdup(value));
			return (SUCCESS);
		}
		current = current->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
		return (FAIL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (SUCCESS);
}
