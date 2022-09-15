#include "main"

/**
 * prints the sign of a number
 *
 * Returns: 1 if greater than 0, -1 less than 0, 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
