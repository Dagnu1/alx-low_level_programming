#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] == c)
			break;
	return (s[a] == c ? (s + a) : '\0');
}
