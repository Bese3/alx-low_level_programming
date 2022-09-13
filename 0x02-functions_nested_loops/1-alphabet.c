#include "main.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/

void print_alphabet(void);

	char first;
int main(void)
{
first = 'a';
while (first <= 'z')
{
_putchar(first);
first++;
}
_putchar('\n');
return (0);
}
