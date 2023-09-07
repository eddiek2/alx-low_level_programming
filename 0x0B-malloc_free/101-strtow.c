#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - we want to splits string into other words
 * @str: this will be the string
 * Return: string will return pointer to an array
 */

char **strtow(char *str)
{
	int c, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	c = flag = len = 0;
	while (str[c])
	{
		if (flag == 0 && str[c] != ' ')
			flag = 1;
		if (c > 0 && str[c] == ' ' && str[c - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		c++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * util - fetching word in to an array
 * @words: that is the word array
 * @str: string of the array
 */

void util(char **words, char *str)
{
	int k, l, start, flag;

	k = l = flag = 0;
	while (str[k])
	{
		if (flag == 0 && str[k] != ' ')
		{
			start = k;
			flag = 1;
		}

		if (k > 0 && str[k] == ' ' && str[k - 1] != ' ')
		{
			create_word(words, str, start, k, l);
			l++;
			flag = 0;
		}

		k++;
	}

	if (flag == 1)
		create_word(words, str, start, k, l);
}

/**
 * create_word - make word and fix in array
 * @words: string with the array
 * @str: the string itself
 * @start: index starting point of the word
 * @end: we end the index
 * @index: inserting he word into the index
 */

void create_word(char **words, char *str, int start, int end, int index)
{
	int k, l;

	k = end - start;
	words[index] = (char *)malloc(sizeof(char) * (k + 1));

	for (l = 0; start < end; start++, l++)
		words[index][l] = str[start];
	words[index][l] = '\0';
}
