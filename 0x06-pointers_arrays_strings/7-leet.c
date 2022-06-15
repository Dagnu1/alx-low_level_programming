#include "main.h"

/**
 *leet - function that encodes a string into 1337
 *@str: string to encode
 *Return: the encoded string
 */

char *leet(char *str)
{
int i, j;
char array_leet[] = {'4', '3', '1', '0', '7'};
char array_upper[] = {'A', 'E', 'L', 'O', 'T'};
char array_lower[] = {'a', 'e', 'l', 'o', 't'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == array_lower[j] || str[i] == array_upper[j])
str[i] = array_leet[j];
}
}
return (str);
}
