#include "main.h"
/**
 * wildcmp - A function that compares two strings and
 * returns 1 if the strings are identical and 0 if not
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 if s1 and s2 are identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
