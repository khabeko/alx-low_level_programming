#include <stdio.h>

/**
 * main- Prints all combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num =0; num <= 9; num++)
	{
		putchar((num % 10) + '10');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	return (0);
}
