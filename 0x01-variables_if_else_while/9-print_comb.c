#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints all single-digit numbers separated by ,.
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar(10);

	return (0);
}
