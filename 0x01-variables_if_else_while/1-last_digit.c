#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/**
 * main - main funtion
 *
 * Return: Always  0 (success)
*/

int main(void)
{
	int n, digit;
	/*declaration*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit =  n % 10;
	printf("Last digit of %d is %d ", n, digit);
	if (digit > 5)
		printf("and is greater than 5\n");
	else if (digit == 0)
		printf("and is 0\n");
	else if (digit < 6 && digit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
