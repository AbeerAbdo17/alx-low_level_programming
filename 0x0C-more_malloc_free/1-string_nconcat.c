#include"main.h"
#include<stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings
 *
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x, y, lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[1ens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;
	ptr = malloc(lens1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		ptr[x] = s1[x];
	}

	for (y = 0; y < n; y++)
	{
		ptr[x] = s2[y];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);

}
