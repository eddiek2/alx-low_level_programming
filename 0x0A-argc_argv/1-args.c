#include "main.h"
#include <stdio.h>

/**
 * main -print argument in program
 * @argc: argument number
 * @argv: argument array
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

