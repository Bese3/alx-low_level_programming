#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include<stdio.h>
#include<stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_list(int *array, int lower, int higher);

#endif/*SEARCH_ALGOS*/