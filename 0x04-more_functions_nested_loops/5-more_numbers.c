#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int a, b, c;

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a <= 1; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				if (!(a == 1 && b >= 5))
				{
					if (a)
						_putchar(a + '0');
					_putchar(b + '0');
				}
			}
		}
		_putchar('\n');
	}
}
