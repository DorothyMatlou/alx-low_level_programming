#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 * @dest: stored memory
 * @src: copied from
 * @n: number of bytes
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
