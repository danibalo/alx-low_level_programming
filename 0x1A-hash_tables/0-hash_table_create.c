#include "hash_tables.h"
/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return : If an error occurs returns NULL
 * if not the pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_pointer;
	unsigned long int i;

	/* allocating memory block for the hash table */
	hash_table_pointer = malloc(sizeof(hash_table_t));

	if (hash_table_pointer == NULL)
		return (NULL);

	hash_table_pointer->size = size;
	hash_table_pointer->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_pointer->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_pointer->array[i] = NULL;
	}

	return (hash_table_pointer);
}
