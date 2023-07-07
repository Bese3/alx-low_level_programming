#include "hash_tables.h"

/**
 * hash_table_delete: deletes all the content
 * @ht: hash table to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		free_table(ht->array[i]);
	}
	free(*ht->array);
	free(ht->array);
	free(ht);
}

/**
 * free_node - deletes the node
 * @head: the node
 *
 * Return: void
 */

void free_table(hash_node_t *head)
{
	hash_node_t **all = NULL;
	hash_node_t *first = head;
	int i, nodes = 0;

	for (; head != NULL; nodes++)
	{
		head = head->next;
	}
	nodes--;
	head = first;

	if (nodes == 0)
	{
		free(head->value);
		free(head->key);
		free(head->next);
		free(head);
		return;
	}
	all = malloc(sizeof(hash_node_t) * nodes);
	for (i = 0; i < nodes; i++)
	{
		all[i] = head;
		head = head->next;
	}

	for (i = nodes - 1; i >= 0; i -= 2)
	{
		free(all[i]->key);
		free(all[i]->value);
		free(all[i]->next->key);
		free(all[i]->next->value);
		free(all[i]->next);
		free(all[i]);
	}

	if ((nodes - 1) % 2)
	{
		free(all[0]->key);
		free(all[0]->value);
		free(all[0]->next);
		free(all[0]);
	}
	free(all);
}
