#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update
 * @key: key
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newpair, *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (tmp != NULL)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	newpair = malloc(sizeof(hash_node_t));
	if (newpair == NULL)
		return (0);

	newpair->key = strdup(key);
	newpair->value = strdup(value);
	newpair->next = NULL;

	if (ht->array[idx] != NULL)
		newpair->next = ht->array[idx];

	ht->array[idx] = newpair;

	return (1);
}
