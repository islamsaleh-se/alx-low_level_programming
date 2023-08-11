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

	putchar(48);
	for (i = 'a'; i <= 'z'; i++)
	{
			putchar(44);
			putchar(32);
			putchar(i);
	}

	return (0);
}
