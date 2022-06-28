#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: source
 * @dest: destination
 * @n: bytes of the memory area
 * Return: pointer to s string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
