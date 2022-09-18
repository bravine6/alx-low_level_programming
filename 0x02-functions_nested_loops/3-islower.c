#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{

		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
