#include <stdio.h>
/**
 * main - prints all possible combinations of single digits
 * Return: always zero
 */
int main(void)
{
	int numbers = '0';
		while (numbers <= '9')
		{
			putchar(numbers);
			if (numbers != 9)
			{
				putchar(',');
				putchar(' ');
			}
			numbers++;
		}
	putchar('\n');
	return (0);
}
