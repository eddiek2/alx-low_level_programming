#include "main.h"

/**
 * _isupper - we want to make sure it's uppercase letters
 * @c: we make char to do that
 *
 * Return: if uppercase return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
