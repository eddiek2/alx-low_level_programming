#include "lists.h"

/**
 * list_len - find the length of a list here
 * @h: the header files
 * Return: length of the nude in question
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
