#include "main.h"
#include <stdio.h>
/**
 * get_bit - return the value of a bit of a given index
 * @n: number
 * @index: index of the bit we want to get
 *
 * Return: Value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int hold;

if (index > 64)
return (-1);

hold = n >> index;

return (hold & 1);
}
