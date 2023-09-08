#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  prints alphabet in lowercase and then in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	}
	/*print A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++
	}
	putchar('\n');
	return (0);
}
