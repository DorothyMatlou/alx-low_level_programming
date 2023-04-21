#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints lowercase alphabets in reverse
 * Return: Always (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
