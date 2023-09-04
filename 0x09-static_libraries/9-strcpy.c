#include "main.h"

/**
 * char *_strcpy - print string to the src for the program
 * @dest: we need to copy to programs
 * @src: we copying from
 * Return: value of the string
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;
	int l = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; l < h ; l++)
	{
		dest[l] = src[l];
	}
	dest[h] = '\0';
	return (dest);
}
