#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
*/
int main(void)
{

	char lowercase;
	char uppercase;

	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar ('\n');
	return (0);
}
