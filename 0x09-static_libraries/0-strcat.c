#include "main.h"
/**
 * _strcat - concatenates with four strings
 * @dest: value changed
 * @src: value keep changing
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int d;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[j] = src[d];
		j++;
		d++;
	}

	dest[j] = '\0';
	return (dest);
}
