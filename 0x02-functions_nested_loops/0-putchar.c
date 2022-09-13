#include "main.h"
/**
 * main - Program that prints _putchar followd by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char _putchar[] = "_putchar";
	int i = 0;

	while (_putchar[i] != '\0')
	{
		_putchar(_putchar[!]);
		i++;
	}
	_putchar('\n');

	return (0);
}
