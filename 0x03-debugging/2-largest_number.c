#include "main.h"

/**
 * Description:largest number
 * Return: largest number
 * largest_number - returns the largest of 3 numbers
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
