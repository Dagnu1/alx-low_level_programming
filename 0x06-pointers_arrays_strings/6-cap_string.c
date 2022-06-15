#include "main.h"

/**
 *cap_string - capitalizes all first letters of words of a string
 *@str: string to use
 *Return: string
 */

char *cap_string(char *str)
{
int i, j, check;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

if (str[0] > 96 && str[0] < 123)
str[0] -= 32;
for (i = 1; str[i] != '\0'; i++)
{
if (str[i] > 96 && str[i] < 123)
{
check = 0;
for (j = 0; check == 0 && j < 13; j++)
{
if (str[i - 1] == a[j])
{
check = 1;
}
}
if (check == 1)
{
str[i] -= 32;
}
}
}
return (str);
}
