#include <stdio.h>
/**
 * main - print numbers of base ten
 * Return: always zero
 */
int main(void)
{
	char base_10 = '0';

	while (base_10 <= '9')
	{
		putchar(base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
