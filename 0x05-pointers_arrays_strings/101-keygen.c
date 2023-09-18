#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: always 0
*/

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 78;
		s = s + c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
