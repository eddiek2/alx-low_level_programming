#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns it parameters
 * @n: the number of parameters to the function
 * ...: variable number of parameter
 * Return: if n == 0 - 0
 * otherwise - sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list bt;
	unsigned int j, sum = 0;

	va_start(bt, n);

	for (j = 0; j < n; j++)
		;

	va_end(bt);

	return (sum);
}
