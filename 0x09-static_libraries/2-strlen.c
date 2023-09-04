#include "main.h"

/**
 * _strncpy - a string is copied by the program
 * @dest: entered a value in the program
 * @src: another program was entered
 * @n: different program was entered
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
