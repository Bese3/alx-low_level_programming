#include "lists.h"

/**
* listint_len - a function that returns the number of elements
* in a linked listint_t list
* @h: a pointer to a listint_t list
* Return: returns the number of elements in the list
*/

size_t listint_len(const listint_t *h);


int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}


size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
