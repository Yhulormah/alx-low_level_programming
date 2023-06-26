#include "main.h"
/**
 * _puts - prints a string as well as a new line
 * @str: string to print
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
