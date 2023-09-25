#include "lists.h"
#include <stdio.h>

/**
 * free_listint - A function that frees a list
 * @head: head of a pointer in the list
 * Return: Always return NULL else a function
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
