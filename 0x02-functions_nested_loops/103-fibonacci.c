#include <stdio.h>

/**
 * main - print summof even values in fibonnacci sequence
 * less than 4000000
 * Return: ALways 0 Success
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 50; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		l = j + k;
		j = k;
		k = j;
	}
	printf("%lu\n", sum);

	return (0);
}
