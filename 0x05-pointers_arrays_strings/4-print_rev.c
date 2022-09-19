#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: int to check
 *
 * Description: this will print a string in reverse
 * Return: 0 is success
 */
void print_rev(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
