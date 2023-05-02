#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int rts = 0;
	int m;

	while (*s != '\0')
	{
		rts++;
		s++;
	}
	s--;
		for (m = rts; m > 0; m--)
		{
			_putchar(*s);
			s--;
		}
	_putchar('\n');
}
