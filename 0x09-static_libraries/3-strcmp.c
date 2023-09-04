#include "main.h"

/**
 * _strcmp - compare string values in the program
 * @s1: value to be inputed
 * @s2: value to be inputed
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	k++;
	}
	return (0);
}
