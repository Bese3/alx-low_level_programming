#include"search_algos.h"


/**
 * binary_search - function performs a binary search on a sorted array
 * to find the index of a given value, returning -1 if the value is not found.
 *
 * @array: A pointer to the array of integers that we want to search in.
 * @size: The parameter "size" represents the size of the array.
 * It is of type "size_t", which is an unsigned integer type used for
 * representing sizes and counts.
 * @value: The value parameter is the element that you
 * are searching for in the array.
 *
 * Return: the index of the element in the array that matches
 * the given value. If the value is not
 * found in the array, it returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, lower, higher;
if (array == NULL)
return (-1);

for (lower = 0, higher = size - 1; higher >= lower;)
{
print_list(array, lower, higher);
i = lower + (higher - lower) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
higher = i - 1;
else
lower = i + 1;
}
return (-1);
}


/**
 * print_list - prints the elements of an array within a specified range.
 *
 * @array: A pointer to an integer array.
 * @lower: The lower parameter represents the starting index
 * of the array from which we want to print the elements.
 * @higher: The "higher" parameter represents the upper bound of
 * the range of elements in the array that we want to print.
 */
void print_list(int *array, int lower, int higher)
{
int i;
printf("Searching in array: ");
for (i = lower; i < higher; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
}
