#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that print alphabet omitting others
 * Return: Always (Success)
 */
int main(void)
{
	char alp, e, q;

	e = 'e';
	q = 'q';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != e && alp != q)
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
