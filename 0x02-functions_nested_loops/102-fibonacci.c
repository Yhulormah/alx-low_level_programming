#include <stdio.h>

/**
 * main - print the first 52 fibonacci numbers
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	long y = 1, z = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", y);
	else if (i == 1)
	printf(", %ld", z);
	else
	{
	z += y;
	z = y - z;
	printf(", %ld", z);
	}
	++i;
	}
	printf("\n");
	return (0);
}

