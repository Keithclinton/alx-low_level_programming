#include <stdio.h>
/**
 * main - Printing lines
 * Return: always zer
 */

int main(void)
{
	int n;
	int b[5];
	int *p;


	b[2] = 1024;
	p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 5) = 98;
  /* ...so that this prints 98\n */
	printf("b[2] = %d\n", b[2]);
	return (0);
}

