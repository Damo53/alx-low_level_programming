#include "main.h"
/**
 * _strspn - returns number of bytes from a new string
 * @s: main string
 * @accept: substring
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, num;

	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
			if (accept[n] == s[i])
			{
				num++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (num);
	}
	return (num);
}
