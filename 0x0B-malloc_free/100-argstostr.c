#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenating all argument of this program
 * @ac: entry of argument
 * @av: entry of this arguement
 * Return: new string, else Null when t has to fail
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int m, n, o, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		s = av[m];
		n = 0;

		while (s[m++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (m = 0, n = 0; m < ac && n < len; m++)
	{
		s = av[m];
		o = 0;

		while (s[o])
		{
			str[n] = s[o];
			o++;
			n++;
		}
		str[n++] = '\n';
	}
	str[n] = '\0';

	return (str);
}
