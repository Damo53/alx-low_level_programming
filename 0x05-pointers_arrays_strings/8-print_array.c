#include "main.h"
#include <stdio.h>
/**
 * print_array - print the number of element of array to be printed
 * @a: the name of the array
 * @n: number of elements of the array
 * Return: elements in the array
 */
void print_array(int *a, int n)
{
	int number = 0; /* corresponding value of element in the array*/

	while (number < n)
	{
	printf("%d", a[number]);
	number++;
	if (number != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
