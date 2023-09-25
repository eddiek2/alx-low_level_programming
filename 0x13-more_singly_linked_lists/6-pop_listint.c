#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a list
 * @head: integer head
 * Return:Always retun NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
