#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: pointer
 * Return: 0
 */
int _strlen(char *s)
{
	int num = 0;

	for (; *s++;)
		num++;
	return (num);
}
