#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints all single digit numbers of base 10 starting from 0.
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	return (0);
}
