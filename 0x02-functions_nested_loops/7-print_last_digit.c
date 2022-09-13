#include "main.h"

/**
 * print_last-digit - will print the last digit of a given number.
 * @n: Number used to find the last digit
 *
 * Description: will print the last digit of a given number. 
 *
 * Return: last digit as int value
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
