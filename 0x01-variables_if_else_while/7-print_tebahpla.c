#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints the lowercase alphabet in reverse.
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 'z'; i <= 'a'; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
