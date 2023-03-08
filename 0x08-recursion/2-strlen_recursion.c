#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string lenght to return
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
