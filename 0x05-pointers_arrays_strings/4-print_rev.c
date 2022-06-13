#include "main.h"

/**
 * print_rev - check the code
 * @s: a pointer to an int
 * Return
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
	a++;
	}
	for (a = a - 1; a >= 0; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}
