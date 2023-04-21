#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  program that prints alphabets in lowercase then uppercase
 * Return: Always (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
