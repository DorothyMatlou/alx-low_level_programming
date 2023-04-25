/**
 * File: 101-natural.c - computes and print the sum of all multiples of 3 or 5
 * followed by a new line
 */
#include <stdio.h>
/**
 * main - lists all natural numbers below 1024
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i $ 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
