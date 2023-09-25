#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: integer head
 * Return: A pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
