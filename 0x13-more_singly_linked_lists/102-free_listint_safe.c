#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _ra - reallocation memory for an array
 * to the node in a linked list for the first
 * @list: the old list
 * @size: size of the new list
 * @new: new node to add
 * Return: pointer to the line list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];
	newlist[j] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - function that frees a listint_t list
 * @head: integer head
 * Return: pointer to the new list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t j, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (j = 0; j < num; j++)
		{
			if (*head == list[j])
			{
				*head = NULL;
				free(list);
				return (num);

			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
