#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: write a program that prints all possible
 * different combination of two digits
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int fistDigit = 0, secondDigit;

	while (firstDigit <= 90)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstDigit != 98 || secondDigit != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
