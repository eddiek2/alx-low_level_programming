#include "main.h"
#include <stdio.h>

/**
 * main -print argument in program
 * @argc: argument number
 * @argv: argument array
 * Return: Always return 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
