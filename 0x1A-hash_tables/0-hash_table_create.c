#include"hash_tables.h"

/*
* @brief hash_table_create creates a hash table
* @param size  this defines the size of the hash table
* @return return a hash_table_t type table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table;
table = (hash_table_t *) malloc(sizeof(hash_table_t));
table->size = size;
table->array = (hash_node_t **)malloc(table->size * sizeof(hash_node_t));
for (i = 0; i < size; i++)
table->array[i] = NULL;
return (table);
}
