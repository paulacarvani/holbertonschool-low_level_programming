#include "hash_tables.h"

/**
 * hash_table_create - Creates a hast table
 * @size: size of array
 * Return: New Hash_table or if is error NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *nht;
unsigned long int i;

if (size == 0)
return (NULL);

nht = malloc(sizeof(hash_table_t));
if (nht == NULL)
return (NULL);

nht->array = malloc(sizeof(hash_table_t *) * size);
if (nht->array == NULL)
{
free(nht);
return (NULL);
}
nht->size = size;
for (i = 0; i < size; i++)
nht->array[i] = NULL;

return (nht);
}
