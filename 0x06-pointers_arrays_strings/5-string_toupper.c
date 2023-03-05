#include "main.h"
/**
 * string_toupper - convert lowercase to uppercase characters
 * @n : takes one argument string
 * Return: 0
 */
char *string_toupper(char *n)
{
	char str;
	int i;

	i = 0;
	while (str[i] != '\o')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	_putchar(str[i]);
	return (0);
}
