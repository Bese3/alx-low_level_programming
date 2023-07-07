#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i, j;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
		{
			if (i == ht->size - 1)
				printf("}\n");
			 continue;
		}

		node = ht->array[i];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
		}

		
		for (j = i + 1; j < ht->size; j++)
		{
			if (ht->array[j])
			{
				printf(", ");
				break;
			}
		}
	}
}