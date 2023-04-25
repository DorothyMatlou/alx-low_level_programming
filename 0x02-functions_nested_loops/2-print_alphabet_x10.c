#include "main.h"
/**
 * print_alphabet_x10 prints 10 times the alphabets in lowercase
 * followed by a new line
 * Return: Always (Success)
 */
void print_alphabet_x10(void)
{
	char cr;
	int i;

	i = 0;
	while(i < 10)
	{
		cr = 'a';
			while(cr <= 'z')
			{
				_putchar(cr); cr++;
			}
		_putchar('\n'); i++;
	}
}
