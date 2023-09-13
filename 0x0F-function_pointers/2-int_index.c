#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - a function that search for integer
 *@array: number of integer in the array
 *@size: the size of the array
 *@cmp: pointer to the function to be used to compare values
 *Return: index of the match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]) == 1)
			return (u);
	}
	return (-1);
}
