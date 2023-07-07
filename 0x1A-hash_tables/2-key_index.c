#include"hash_tables.h"


unsigned long int key_index(const unsigned char *key, unsigned long int size){
     unsigned long i = 0;
     int j;

    for (j = 0; key[j]; j++)
        i += key[j];

    return i % size;
}