#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *		while using int variable
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 0)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
