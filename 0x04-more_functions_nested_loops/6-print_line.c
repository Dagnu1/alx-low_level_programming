#include "main.h"

/**
 * print_line - draws straight line
 * @n: the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
	for (a = 0; a < n; a++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
