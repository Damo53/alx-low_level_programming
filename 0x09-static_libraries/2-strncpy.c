#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int strlen = 0;

	while (strlen < n && src[strlen] != '\0')
	{
		dest[strlen] = src[strlen];
		strlen++;
	}
	while (strlen < n)
	{
		dest[strlen] = '\0';
		strlen++;
	}
	return (dest);
}
