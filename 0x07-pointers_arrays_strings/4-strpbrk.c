#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: characters
 * Return: length of prefix
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				goto exit;
exit: return (s[a] != '\0' ? s + a : '\0');
}
