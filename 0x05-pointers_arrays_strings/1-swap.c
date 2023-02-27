#include "main.h"
/**
 * swap_int - entry point
 * @a: character
 * @b: character
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
