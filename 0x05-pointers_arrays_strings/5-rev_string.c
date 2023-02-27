#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	int a;

	a = 10 - 1;
	for (; a >= 0; a--)
		_putchar(s[a]);

