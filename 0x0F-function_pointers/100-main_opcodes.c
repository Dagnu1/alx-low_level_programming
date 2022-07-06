#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int nofb, i;

	int (*func)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nofb = atoi(argv[1]);
	if (nofb == 0)
		return (1);
	if (nofb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nofb; i++)
	{
		printf("%02x", *((unsigned char *)func + i));
		if (i != (nofb - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
