#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of #'s in diagnols of square
 * @a: input square array
 * @size: size of one dimension in array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b, c, sum1 = 0, sum2 = 0;

	for (c = 0, b = size - 1; c < (size * size); c += size + 1, b += size - 1)
		sum1 += a[c], sum2 += a[b];
	printf("%d, %d\n", sum1, sum2);
}
