#include "main.h"
/**
 * main - Program that prints _putchar followd by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}
