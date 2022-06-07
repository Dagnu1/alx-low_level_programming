#include "main.h"

/**
  * main - Entry point
  *
  *Return: Always  0 (Success)
  */

int main(void)
{
char charName[] = "_putchar";
int p;
for (p = 0; p < 8; p++)
{
_putchar(charName[p]);
}
_putchar('\n');
return (0);
}
