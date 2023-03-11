#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: a string
 * @src: second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int c;

	while (dest[a] != '\0')
	{
		a++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[a] = src[c];
		a++;
		c++;
	}

	dest[a] = '\0';
	return (dest);
}
