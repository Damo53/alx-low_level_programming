#include "main.h"
/**
 * puts2 - prints every other character
 * @str: output
 * Return: 0
 */
void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] >= 0 && str[a] != '\0')
	{
		a += 2;
	_putchar(str[a]);
	}
	_putchar('\n');
}

