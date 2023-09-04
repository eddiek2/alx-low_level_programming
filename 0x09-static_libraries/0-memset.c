#include "main.h"
/**
 * _memset - block of memory of the program files
 * @s: memory address to be filed
 * @b: value desired
 * @n: changing the number of bytes
 *
 * Return: change array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int u = 0;

	for (; n > 0; u++)
	{
		s[u] = b;
		n--;
	}
	return (s);
}
