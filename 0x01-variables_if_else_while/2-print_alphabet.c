#include <stdio.h>
/**
 *main -prints the alphabet in lowercase,
 *followed by a new line
 *Return:Alaways 0 (success)
 */
int main(void)
{
	char ch;
	for (ch ='a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('/n');
	return (0);
