#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always nothing (success)
 */
void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
