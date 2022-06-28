#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (n > j)
{
if (src[j] == '\0')
{
for ( ; j < n; j++)
{
dest[i] = '\0';
i++;
}
}
else
{
dest[i] = src[j];
j++;
i++;
}
}

return (dest);
}
