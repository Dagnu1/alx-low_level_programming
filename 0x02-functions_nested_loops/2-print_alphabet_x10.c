#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int lowercase;
int count;

count = 0;
while (count < 10)
{
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	_putchar(lowercase);
}
count++;
_putchar('\n');
}

}
