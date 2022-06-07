#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int s;
int t;

for (s = 0; s <= 23; s++)
{
for (t = 0; t <= 59; t++)
{
_putchar (s / 10 + '0');
_putchar (s % 10 + '0');
_putchar (':');
_putchar (t / 10 + '0');
_putchar (t % 10 + '0');
_putchar ('\n');

}


}

}
