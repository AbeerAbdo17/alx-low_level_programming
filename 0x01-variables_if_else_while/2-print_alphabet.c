#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar("\n");
	return (0);
}
