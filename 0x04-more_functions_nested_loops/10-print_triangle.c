#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that prints a triangle
 *@size: size of triangle
 *
 *Return: return 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
