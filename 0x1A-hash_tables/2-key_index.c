#include "hash_tables.h"

/**
 * key_index - function that generates a distributed index
 * according to a given hash
 *
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idex = 0;

	if (size == 0 || key == NULL)
		return (NULL);
	idex = hash_djb(key) % size;
	return (idex);
}
