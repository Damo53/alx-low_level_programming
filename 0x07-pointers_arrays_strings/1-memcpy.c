#include "main.h"
/**
 * _memcpy -  copy memory
 * @dest: area to copy memory into
 * @src: memory to be copied
 * @n: size of byte
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

