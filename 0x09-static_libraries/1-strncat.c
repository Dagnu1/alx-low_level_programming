#include "main.h"

/**
 *_strncat - function that concatenates two strings
 *@dest: destination
 *@src: source
 *@n: size of string
 *Return: copied string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0' && n > j)
{
dest[i] = src[j];
j++;
i++;
}
if (n > 0)
{
dest[i] = '\0';
}
return (dest);
}
