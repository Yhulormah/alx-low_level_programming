#include "main.h"

/**
 * _islower - is char a lower case
 * @c: is the char tobe check
 * Return: 1 if char is lower case, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

