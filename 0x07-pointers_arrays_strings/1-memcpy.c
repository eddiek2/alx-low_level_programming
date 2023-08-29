#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: are destination to fill with bytes
 * @src: constant byte
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (for i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

