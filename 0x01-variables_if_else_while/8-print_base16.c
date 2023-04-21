#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all numbers of base 16
 * Return: Always (Success)
 */
int main(void)
{
	int d;
	char alp;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
			for (alp = 'a'; alp <= 'f'; alp++)
				putchar(alp);
	putchar('\n');
	return (0);
}
