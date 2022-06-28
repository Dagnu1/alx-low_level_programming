#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *@s: a pointer of an int
 * Return: answer
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
