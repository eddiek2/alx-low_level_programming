#include "main.h"

/**
 * _strstr - always enter program point here
 * @haystack: entry point
 * @needle: another entry point
 * Return: Always return 0 (Successul)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *f = needle;

		while (*e == *f && *f != '\0')
		{
			e++;
			f++;
		}
		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
