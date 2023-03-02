#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ndest = 0; /* lenght of dest string*/
	int nsrc; /* lenght of src string*/

	while (dest[ndest] != '\0')
	{
		ndest++;
	}
	nsrc = 0;
	while (nsrc < n && src[nsrc] != 0)
	{
		dest[ndest] = src[nsrc];
		ndest++;
		nsrc;
	}
	dest[ndest] = '\0';
	return (dest);
}
