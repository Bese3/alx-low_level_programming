#include"hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value){
    hash_node_t* new_hash = (hash_node_t*)malloc(sizeof(hash_node_t));
    unsigned int index;
    if (!ht || !key || strlen(key) == 0 || !new_hash){
        return 0;
    }
    index = hash_djb2((const unsigned char*)key) % ht->size;
    new_hash->key = strdup(key);
    new_hash->value = strcmp(value , "") ? strdup(value) : "";

    if(!ht->array[index]){
        ht->array[index] = new_hash;
    }
    else if(strcmp(ht->array[index]->key , key) != 0){
        new_hash->next = ht->array[index];
        ht->array[index] = new_hash;

    }
    else{
      free(new_hash->value);
      free(new_hash);
      ht->array[index]->value = strdup(value);    
    }
   return 1;
}