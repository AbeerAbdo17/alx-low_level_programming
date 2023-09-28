#include"main.h"

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 *
 * @s: input
 *
 * Return: 0 or 1
*/
int _index(char *s);
int _test(char *s, int begin, int last, int m);
int is_palindrome(char *s)
{
	int last = _index(s);

	return (_test(s, 0, last - 1, last % 2));
}

/**
 * _index - return  last index
 *
 * @s: input
 *
 * Return: index
*/

int _index(char *s)
{
	int i = 0;

	if (*s != '\0')
		i = i + _index(s + 1) + 1;
	return (i);
}

/**
 * _test - check is palindrome or not
 *
 * @s: input
 * @begin: input
 * @last: input
 * @m: input
 * Return: 0 or 1
*/

int _test(char *s, int begin, int last, int m)
{
	if ((begin == last && m != 0) || (begin == last + 1 && m == 0))
		return (1);
	else if (s[begin] != s[last])
		return (0);
	else
		return (_test(s, begin + 1, last - 1, m));
}
