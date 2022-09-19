#include "main.h"

/**
 * main - prints 10 times the numbers, from 0 to 14, followed by a new line
 * Return: (0 through 14) * 10
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	int entier;
	int remain;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			entier = j / 10;
			remain = j % 10;
			if (entier != 0)
			{
				_putchar('0' + entier);
			}
			_putchar('0' + remain);
		}
		_putchar('\n');
		i++;
	}
}
