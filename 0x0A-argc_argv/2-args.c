#include "main.h"
#include <stdio.h>

/**
 * main - print all argument
 * @argc: enter argument
 * @argv: argument array
 * Return: Always print 0
 */

int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
