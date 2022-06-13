#include "main.h"
#include <stdio.h>

/**
 * swap_int - function which swap value of a to b
 * @a: temporary value of a to be changed with b
 * @b: temporary value of b to be changed with a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
