#include "main.h"

/**
 * times_table -  function that prints the 9 times table, begining with 0
 */
void times_table(void)
{
	int l, m, p, q, w;

	for (l = 0; l <= 9; l++)
	{
	for (m = 0; m <= 9; m++)
	{
	p = l * m;
	if (p > 9)
	{
	q = p % 10;
	w = (p - q) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(32);
	_putchar(w + '0');
	_putchar(q + '0');
	}
	else if (m != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(p + '0');
	}
	}
	_putchar('\n');
}

