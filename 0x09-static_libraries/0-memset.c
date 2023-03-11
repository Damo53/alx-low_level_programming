#include "main.h"
/**
 * _memset -fills the first n bytes of the memory area pointed
 * @s: pointer to memory
 * @b: constant byte
 * @n: size of byte
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
