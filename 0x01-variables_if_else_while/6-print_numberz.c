#include <stdio.h>
/**
 * main - print alphabets without char use char
 * Return: always zero
 */
int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
