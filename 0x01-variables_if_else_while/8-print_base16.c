#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * ReturnL Always 0.
 */

int main(void)
{
	char a = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}

