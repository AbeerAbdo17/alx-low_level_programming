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

	while (ch < 26)
	{
		putchar(alp[ch]);
		ch++;
	}
	putchar("\n");
	return (0);
}
