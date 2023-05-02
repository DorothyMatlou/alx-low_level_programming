#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int cou = 0;
	int i;

	while (s[cou] != '\0')
		cou++;
	for (i = 0; i < cou; i++)
	{
		cou--;
		rev = s[i];
		s[i] = s[cou];
		s[cou] = rev;
	}
}
