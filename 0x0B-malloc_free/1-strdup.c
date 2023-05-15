#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in a memory, which cointains a copy of the string given as a parameter
 * @str: char
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *all;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	all = malloc(sizeof(char) * (i + 1));
	if (all == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		all[r] = str[r];
	return (all);
}
