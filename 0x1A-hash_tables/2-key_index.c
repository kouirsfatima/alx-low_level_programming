#include "hash_tables.h"

/**
 * key_index - function that generates a distributed index
 * according to a given hash
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idex = 0;

	if (size == 0 || key == NULL || key[0] == '\0')
		return (0);
	idex = hash_djb2(key) % size;
	return (idex);
}
