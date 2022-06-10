#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Return 1 for c >= '0' && c <= '9'
 * @c: int value
 * Return: Result
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
