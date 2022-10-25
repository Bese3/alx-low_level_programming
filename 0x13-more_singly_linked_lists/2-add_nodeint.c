#include<stdio.h>
#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the beginning
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added in the new node
* Return: returns the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n);






listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);


}

