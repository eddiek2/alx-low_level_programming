#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of side and we will try to assign char
 * @size: we input array size
 * @c: input char to assign
 * Description: we will create array size and assign the char c
 * Return: Null brings fail and pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int d;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
		str[d] = c;
	return (str);
}
