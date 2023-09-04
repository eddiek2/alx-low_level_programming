#include "main.h"

/**
 * _strspn - this is where we enter program
 * @s: entry point
 * @accept: any input variable
 * Return: Alway return 0 with success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				m++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
