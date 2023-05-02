#include "main.h"
/**
 * puts_half - A function that prints half of a string followed by a new line
 * if odd, n = (length_of_the_string -1) / 2
 * @str: string
 * Return: half of the string
 */
void puts_half(char *str)
{
	int i, n, l;

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
		l++;
	n = (l / 2);

	if ((l % 2) == 1)
		n = ((l + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
