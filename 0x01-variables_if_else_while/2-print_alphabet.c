#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print the lowercase alphabet
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		putchar(ch);

	putchar('\n');

	return (0);
}
