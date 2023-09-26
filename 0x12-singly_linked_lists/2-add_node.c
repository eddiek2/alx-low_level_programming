#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - a function that adds new node
 * @head: the head of the node
 * #str:string to the store
 * Return: address of new elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwnode;
	unsigned int k, count = 0;

	nwnode = malloc(sizeof(list_t));
	if (nwnode == NULL)
		return (NULL);
	nwnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	nwnode->len = count;
	nwnode->next = *head;
	*head = nwnode;

	return (*head);
}
