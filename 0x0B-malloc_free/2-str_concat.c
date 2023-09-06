#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - when two string are concatenated
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int u, v, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		u = 0;
		while (s1[u++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		u = 0;
		while (s2[u++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (u = 0; u < len1; u++)
		result[u] = s1[u];
	for (v = 0; v < len2; v++, u++)
		result[u] = s2[v];
	result[len] = '\0';

	return (result);
}
