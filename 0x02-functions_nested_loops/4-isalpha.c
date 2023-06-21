#include "main.h"

/**
 * _isalpha -checkinf for any alphabetic character
 * @c: character that is to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

