#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that print all element in the list
 * @h: A pointer to the header in the list
 * Return: The number of node in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t cash = 0;

	while (h)
	{
		cash++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cash);
}
