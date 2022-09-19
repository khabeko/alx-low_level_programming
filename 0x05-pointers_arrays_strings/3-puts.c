#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *
 * @str: char to check
 * Description: This will print a string with a new line to stdout
 *
 * Return: 0 is success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
