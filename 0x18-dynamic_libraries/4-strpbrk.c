#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be used
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; s[i] != '\0' && _strchr(accept, s[i]) == NULL; i++)
		;

	if (s[i] == '\0')
		return (NULL);
	else
		return (s + i);
}
