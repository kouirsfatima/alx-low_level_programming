#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	int seperat = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size ; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next == NULL)
			{
				if (seperat)
					printf(", ");
				printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
				seperat = 1;
			}
			else
			{
				tmp = ht->array[i];
				while (tmp)
				{
					if (seperat)
						printf(", ");
					printf("'%s' : '%s'", tmp->key, tmp->value);
					seperat = 1;
					tmp = tmp->next;
				}
			}
		}
	}
	printf("}\n");
}
