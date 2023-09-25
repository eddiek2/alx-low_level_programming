#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: integer head
 * @index: index of node
 * Return: pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *tims, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tims = *head;
	for  (k = 0; k < index - 1; k++)
	{
		if (tims->next == NULL)
			return (-1);
		tims = tims->next;
	}
	next = tims->next;
	tims->next = next->next;
	free(next);
	return (1);
}
