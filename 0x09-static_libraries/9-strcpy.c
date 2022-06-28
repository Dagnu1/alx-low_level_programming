#include "main.h"

/**
  * *_strcpy - copies the string pointed to by src
  * @dest: destination
  * @src: source
  * Return: value of destination
  **/
char *_strcpy(char *dest, char *src)
{
int i, len;

for (len = 0; src[len] != '\0'; len++)
{
}
for (i = 0; i <= len ; i++)
{
dest[i] = src[i];
}
	return (dest);
}
