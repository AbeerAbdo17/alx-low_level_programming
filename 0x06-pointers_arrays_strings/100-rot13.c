#include"main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @a: input
 *
 * Return: string
*/

char *rot13(char *a)
{
	int i, j;
	char AtoZ[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == AtoZ[j])
			{
				a[i] = ROT13[j];
				break;
			}
		}
	}
	return (a);
}
