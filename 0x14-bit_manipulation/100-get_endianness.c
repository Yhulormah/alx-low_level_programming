#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 for big endian, or 1 for little
 */
int get_endianness(void)
{
int num;

num = 1;
if (*(char *)&num == 1)
return (1);
else
return (0);
}
