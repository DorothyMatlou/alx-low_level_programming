#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all possible combinations of two digit numbers
 * Return: Always (Success)
 */
int main(void)
{
	int n, t;

	for (n = 0; n <= 98; n++)
	{
		for (t = n + 1; t <= 99; t++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');
			if (n == 98 && t == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
