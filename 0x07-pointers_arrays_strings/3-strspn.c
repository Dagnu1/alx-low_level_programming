#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: characters
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, a_len = 0, len = 0;

while (accept[a_len] != '\0')
a_len++;

for (a = 0; s[a] != '\0'; a++)

for (b = 0; b < a_len; b++)

if (s[a] == accept[b])
{
len++, b = a_len;
}
else if (b == a_len - 1)

	goto exit;

exit: return (len);
}
