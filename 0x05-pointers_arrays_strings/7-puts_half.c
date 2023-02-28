#include "main.h"
/**
 * puts_half - print second half of the string
 * @str: the string
 * Return: 0
 */
void puts_half(char *str)
{
	int n; /*lenth of the string*/
	int x;

	n = 0;
	while ( str[n] != '\0')
	{
	n++;
	}
	if (n % 2 == 1)
	{
	x = (n - 1) / 2;
	}
	else
	{
	x = n / 2;
	}
	for (; x < n; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
