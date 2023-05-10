#include "main.h"

int check_pal(char *s, int i, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that return 1 if a string is
 * palindrome and 0 if not
 * @s: input string
 * Return: 1 if it is palindrome, 0 if its not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Checks the characters recursively for palindrome
 * @s: input string to be checked
 * @i: iterator
 * @length: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pal(s, i + 1, length - 1));
}
