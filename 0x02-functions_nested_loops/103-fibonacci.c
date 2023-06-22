#include <stdio.h>

/**
 * main - print the sum of even fibonacci num
 * less than 4000000
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	long j = 1, g = 2, sum = g;

	while (g + j < 4000000)
	{
	g += j;
	if (g % 2 == 0)
	sum += g;
	j = g - j;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}

