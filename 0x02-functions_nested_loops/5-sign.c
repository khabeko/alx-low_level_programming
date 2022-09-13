#include "main.h"
/**
 * print_sign -prints the sign of the given number +/-
 * @c: Number to be tested
 *
 *
 * Return: 1 if positive and greater than zero, 0 if is zero, and -1 if neg.
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}

	return (test);
}
