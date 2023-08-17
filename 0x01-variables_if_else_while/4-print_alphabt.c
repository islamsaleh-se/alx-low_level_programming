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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
			putchar(i);
	}
	putchar(10);

	return (0);
}
