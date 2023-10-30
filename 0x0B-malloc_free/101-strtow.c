#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts words in string
 *@s:string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, u;

	flag = 0;
	u = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			u++;
		}
	}
	return (u);
}
/**
 * **strtow - splits a string into words
 *@str:string to split
 *
 * Return: Pointer to an array of strings (Sucess)
 * NULL is an error
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	matrix[k] = NULL;

	return (matrix);
}
