#include "main.h"
/**
 *_puts_recursion - prints a string followed by a new line
 *@s: input
 *Return: 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}