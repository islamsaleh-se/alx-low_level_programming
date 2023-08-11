#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints the alphabet in lowercase,all the letters except q and e
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
