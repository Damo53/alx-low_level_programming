#include "main.h"
/**
 * print_numbers - prints numbers from 0- 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
