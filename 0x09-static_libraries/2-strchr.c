#include "main.h"

/**
 * _strchr - where to enter program
 * @s: entered value
 * @c: entered value
 * Return: Alway 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int d = 0;

	for (; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (&s[d]);
	}
	return (0);
}
