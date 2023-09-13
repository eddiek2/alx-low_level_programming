#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - we want to print a name
 *@name: print the name
 *@f: we will void that word
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
