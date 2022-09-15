#include "main.h"

/**
 * return the largest number of the three
 * a@: first integer
 * b@: second integer
 * c@: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;
	
	if (largest < b)
	{
		largest = b;
		if (largest < c)
			largest = c;
	}

	return (largest);

}
