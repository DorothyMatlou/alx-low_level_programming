#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all possible combinations of three digits
 * Return: Always (success)
 */
int main(void)
{
	int d, n, t;

	for (d = '0'; d < '9'; d++)
	{
		for (n = d + 1; n <= '9'; n++)
		{
			for (t = n + 1; t <= '9'; t++)
			{
				if ((n != d) != t)
				{
					putchar(d);
					putchar(n);
					putchar(t);
					if (d == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
