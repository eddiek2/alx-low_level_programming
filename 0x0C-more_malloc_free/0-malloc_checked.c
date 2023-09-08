#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory usage
 * @b: entry of unsigned  memory
 * Return: Always return a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
