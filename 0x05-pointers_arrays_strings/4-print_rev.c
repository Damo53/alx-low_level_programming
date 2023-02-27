#include "main.h"
/**
 * print_rev - print a string in reverse order
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;
	for (a = b - 1 ; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}

