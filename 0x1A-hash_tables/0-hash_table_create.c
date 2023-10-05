#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htp = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	htp = malloc(sizeof(hash_table_t));
	if (htp == NULL)
		return (NULL);

	htp->size = size;
	htp->array = malloc(sizeof(hash_node_t *) * htp->size);
	if (htp->array == NULL)
		return (NULL);
	for (i = 0; i < htp->size ; i++)
		htp->array[i] = NULL;
	return (htp);
}
