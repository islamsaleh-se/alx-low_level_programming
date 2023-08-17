#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints all the numbers of base 16 in lowercase.
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	printf("\n");

	return (0);
}
