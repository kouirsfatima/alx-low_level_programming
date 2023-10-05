#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htp;

	if (size == 0)
		return (NULL);

	htp = malloc(sizeof(hash_table_t));
	if (htp == NULL)
		return (NULL);

	htp->array = malloc(sizeof(hash_table_t *) * size);
	if (htp->array == NULL)
		return (NULL);
	return (htp);
}
