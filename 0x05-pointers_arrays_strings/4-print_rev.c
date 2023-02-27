#include "main.h"
/**
 * print_rev - print a string in reverse order
 * @s: string
 * Return: 0
 */
void print_rev(char *s);
{
	int a = -1;

	while (s[-1] != '\0')
	{
		_putchar(s[-1]);
		a--;
	}
	_putchar('\n');
}
