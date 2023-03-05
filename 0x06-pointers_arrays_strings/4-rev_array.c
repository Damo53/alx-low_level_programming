#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: first string
 * @n: number of elements to swap
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int array;/*to store the arrays before swaping it*/
	int i; /*position of element in the array*/


	i = 0;
	while (i <= n / 2)
	{
	a[i] = array;
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = array;
	i++;
	}
}
