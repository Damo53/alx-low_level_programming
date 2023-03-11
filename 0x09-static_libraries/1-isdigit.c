#include "main.h"
/**
 * _isdigit - check for digit from 0-9
 * @c: character to check for
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
