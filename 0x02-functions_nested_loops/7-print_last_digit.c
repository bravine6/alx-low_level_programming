#include "main.h"

/**
 * main - prints the last digit of a number
 *
 * Return: Int
 */
int print_last_digit(int)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
