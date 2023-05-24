#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: Alwyas 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*array)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)array;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
