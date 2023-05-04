#include "main.h"
/**
 * rev_string - A function that reverses an array
 * @n: integer
 * Return: Always 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tem;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
		for (j = 0; j < i; j++, i--)
		{
			tem = *(n + j);
			*(n + j) = *(n + i);
			*(n + i) = tem;
		}
}

/**
 * infinite_add - A function that adds two numbers
 * @n1: rp of first number to add
 * @n2: rep of second number to add
 * @r: poinnter to buffer
 * @size_r: buffer size
 * Return: pointer to call the function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, d = 0;
	int value1 = 0, value2 = 0, tem_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		tem_tot = value1 + value2 + over;
		if (tem_tot >= 10)
			over = 1;
		else
			over = 0;
		if (d >= size_r - 1)
			return (0);
		*(r + d) = (tem_tot % 10) + '0';
		d++;
		j--;
		i--;
	}
		if (d == size_r)
			return (0);
		*(r + d) = '\0';
		rev_string(r);
		return (r);
}
