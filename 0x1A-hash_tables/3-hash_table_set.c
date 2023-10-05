#include"hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || !key || !key[0])
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strncmp(key, tmp->key, strlen(tmp->key) + 1) == 0)
		{
			strcpy(tmp->value, value);
			return (1);
		}
		tmp = tmp->next;
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
