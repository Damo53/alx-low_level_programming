#include "main.h"
/**
 * string_toupper - convert lowercase to uppercase characters
 * @n : takes one argument string
 * Return: 0
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\o')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
			i++;
		}
	}
	return (n);
}
