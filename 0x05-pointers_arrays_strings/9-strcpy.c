#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: array to be used
 * @src: number of elemens to be printed
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
