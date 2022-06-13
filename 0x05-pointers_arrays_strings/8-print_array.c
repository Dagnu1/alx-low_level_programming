#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer of an int
 * @n: a value o be return
 * Return: Answer
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
