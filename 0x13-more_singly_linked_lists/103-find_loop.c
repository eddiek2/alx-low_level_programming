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
	listint_t *tortoise, *lain;

	while (tortoise && lain && lain->next)
	{
		tortoise = tortoise->next;
		lain = lain->next->next;
		if (tortoise == lain)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !lain || lain->next)
		return (NULL);
	while (tortoise != lain)
	{
		tortoise = tortoise->next;
		lain = lain->next;
	}
	return (lain);
}
