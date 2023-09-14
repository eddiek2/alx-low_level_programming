#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that print string
 * @separator: move int from each other
 * @n: number of strings
 * @...: variable numberof string
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *trf;
	unsigned int dex;

	va_start(strings, n);
	for (dex = 0; dex < n; dex++)
	{
		trf = va_arg(strings, char *);
		if (trf == NULL)
			printf("(nil)");
		else
			printf("%s", trf);
		if (dex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);

}
