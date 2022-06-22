#include "main.h"

/**
 * _strlen_recursion - functions that returns Length of String
 * @s: string
 *
 * Return: 1
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
