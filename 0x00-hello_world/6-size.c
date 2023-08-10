#include <stdio.h>

/**
	* main - Entry point
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long ll;
	float f;

	printf("Size of a char: %c byte(s)", sizeof(c));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %ld byte(s)", sizeof(li));
	printf("Size of a long long int: %lli byte(s)", sizeof(ll));
	printf("Size of a float: %f byte(s)", sizeof(f));
	return (0);
}
