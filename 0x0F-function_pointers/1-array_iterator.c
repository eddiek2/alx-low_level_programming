#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - fucntion that excute parameters
 * @array: the integer to be pass
 * @size: the size of the function
 *@action: what goes into the parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (array == NULL || action == NULL)
		return;
	for (e = 0; e < size; e++)
		action(array[e]);
}
