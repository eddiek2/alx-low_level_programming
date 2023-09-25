#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: integer head
 * @idx: index of the node
 * @n: number of new node
 * Return: the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *tims, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tims = *head;
		for (j = 0; j < idx - 1 && tims != NULL; j++)
		{
			tims = tims->next;
		}
		if (tims == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tims->next;
	tims->next = new;
	return (new);
}
