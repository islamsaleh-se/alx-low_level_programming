#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints all possible different two digits separated by ,.
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j == 57 && i == 56)
			{
				continue;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
