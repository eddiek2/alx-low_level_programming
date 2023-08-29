#include "main.h"

/**
 * _memset - fills memory high with a constant
 * @s: area to fill with bytes
 * @b: constant byte
 * @n number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
