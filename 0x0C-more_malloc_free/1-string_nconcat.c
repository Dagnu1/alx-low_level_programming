#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empty;
	unsigned int i, strlen, j;
	unsigned int strsize;

	strlen = 0;
	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[strlen] != '\0')
		strlen++;
	strsize = (strlen + n) * sizeof(*nstr);
	nstr = malloc(strsize + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < strsize && s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < strsize && s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
