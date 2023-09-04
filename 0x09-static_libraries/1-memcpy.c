#include "main.h"
/**
 * _memcpy - a function which will copy memory around
 * @dest: stored memory
 * @src: copied memory
 * @n: number in byte
 *
 * Return: changed bytes in copied memories
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int v = n;

	for (; t < v; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
