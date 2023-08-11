#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
	*
 * Description: prints all possible of two-digit numbers range from 0 to 99.
	*
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				for (l = 0; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
				}
				if (i == 57 && j == 56 && k == 57 && l == 57)
				{
					continue;
				}
				putchar(44);
				putchar(32);
			}

		}
	}
	putchar(10);

	return (0);
}
