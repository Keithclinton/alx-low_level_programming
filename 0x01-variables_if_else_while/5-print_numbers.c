#include <stdio.h>
/**
 * main - print numbers of base ten
 * Return: always zero
 */
int main(void)
{
	int base_10 = 0;

	while (base_10 <= 10)
	{
		putchar(base_10);
		base_10++;
	}
	putchar('\n');
	return (0);
}
