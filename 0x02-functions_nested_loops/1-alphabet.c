#include "main.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/

void print_alphabet(void);
{
char first;
for (first = 'a'; first <= 'z'; first++)
{
_putchar(first);
}
_putchar('\n');
}
