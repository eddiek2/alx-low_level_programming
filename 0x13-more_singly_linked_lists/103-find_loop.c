#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !hare || hare->next)
		return (NULL);
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
