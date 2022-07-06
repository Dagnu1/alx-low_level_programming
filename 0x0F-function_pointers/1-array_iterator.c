#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that
 * executes a function given as a parameter on each element
 * @array: array parameters
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)

		return;
	for (i = 0; i < size; i++)

		action(array[i]);
}
