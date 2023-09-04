#include "main.h"

/**
 * _puts - program has to return a string in stdout
 * @str: print string in the program
 * _putchar has to print a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
