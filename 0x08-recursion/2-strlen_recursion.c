#include "main.h"

/**
 * _strlen_recursion - find the right string
 * @s:  length of a string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
