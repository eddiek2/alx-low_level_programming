#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - we will duplicate and take to new memory space
 * @str: we will char it
 * Return: 0
 */

char *_strdup(char *str)
{
	char *eee;
	int j, t = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	eee = malloc(sizeof(char) * (j + 1));

	if (eee == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		eee[t] = str[t];
	return (eee);
}
