#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - write a functions that print function and new line
 * @separator: character name
 * @n: integer number
 * @...: A variable number to be printed
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int a;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
