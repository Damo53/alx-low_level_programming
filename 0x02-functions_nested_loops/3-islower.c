#include "main.h"
/**
 * _islower- printing lower case
 * @c:character to be checked
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
