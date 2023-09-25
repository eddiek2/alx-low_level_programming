#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that return a number of the element in the list
 * @h: A pointer to the head of the list
 * Return: The number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
