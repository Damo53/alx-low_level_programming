#include "main.h"
#include <unistd.h>
/**
 * _putchar - print output
 * @c: argument to print
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
