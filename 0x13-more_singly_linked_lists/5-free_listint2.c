#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - a function that frees a list
 * @head: A p ointer to the address of the header
 * Description: set the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
