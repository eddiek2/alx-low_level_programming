#include "main.h"

/**
 * _isalpha - we are checking for alphabetical characters
 * @c: what are the characters to work on
 * Return: 1 if c is the letter and return 0 if it not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
