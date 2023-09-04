#include "main.h"

/**
 * _strncat - concatenate strings of two
 * src bytes at most usage of n
 * @dest: value to be used
 * @src: value to be used
 * @n: same as these value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int e;
	int f;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
	dest[e] = src[f];
	e++;
	f++;
	}
	dest[e] = '\0';
	return (dest);
}
