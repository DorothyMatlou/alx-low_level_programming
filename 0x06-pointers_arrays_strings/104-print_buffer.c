#include "main.h"
#include <stdio.h>
/**
 * print_buffer - A function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m, i, j;

	m = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		i = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (j = 0; j < 10; j++)
		{
			if (j < i)
				printf("%02x", *(b + m + j));
			else
				printf("  ");
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = 0; j < i; j++)
		{
			int c = *(b + m + j);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		m += 10;
	}
}
