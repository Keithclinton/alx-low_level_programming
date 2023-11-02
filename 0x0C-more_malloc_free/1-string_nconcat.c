#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first String
 * @s2: the second string
 * @n: index
 * t: repesents pointer
 * a: is the counter
 *
 * Return: return char is sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int size1 = 0, size2 = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	t = malloc((size1 + n + 1) * sizeof(char));

	if (t == NULL)
		return (0);

	for (k = 0; k < size1; k++)
	{
		t[k] = s1[k];
	}

	for (; k < (size1 + n); k++)
	{
		t[k] = s2[k - size1];
	}
	t[k] = '\0';

	return (t);
}
