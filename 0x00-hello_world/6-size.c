#include <stdio.h>
/**
 * main - A program that introduces the sizes
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

printf("Size of a char: %zu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %zu bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
