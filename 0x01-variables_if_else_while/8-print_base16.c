#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercass
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump til 96; */
		if (digit == 57)
			digits += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
