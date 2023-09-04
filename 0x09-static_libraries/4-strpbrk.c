#include "main.h"

/**
 * _strpbrk - where the program begins
 * @s: the entry point of the program
 * @accept: the entry point of the program
 * Return: Always return 0 (Successful)
 */

char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			return (s);
		}
	s++;
	}

	return ('\0');
}
