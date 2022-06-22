#include "main.h"

/**
 * _pow_recursion - function that returns the natural square root of a number
 * @x: integer value
 * @y: Power value
 *
 * Return: On success 1 & the function should return -1 on error
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
