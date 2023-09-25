#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint -  function that adds a new node at the beginning of a list
 * @head: integer in the node of the function
 * @n: integer for a new node
 * Return: NULL if function fails else new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
