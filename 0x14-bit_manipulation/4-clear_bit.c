#include "main.h"
#include <stdio.h>
/**
 * clear_bit - at a givn index set the value of a bit to 0
 * @n: pointer to number to change
 * @index: indexof a bit
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
unsigned int hold;

if (index > 24)
return (-1);
hold = index;
for (i = 1; hold > 0; i *= 2, hold--)
;

if ((*n >> index) & 1)
*n -= i;

return (1);
}
