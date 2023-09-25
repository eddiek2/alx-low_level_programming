#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: A pointer to the address of the list
 * @n: The integer of the new code 
 * Return: If the function fail NULL else address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;
		old->next = new;		
	}
	return (*head);
}
