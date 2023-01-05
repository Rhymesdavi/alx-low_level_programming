#include "main.h"
/**
 * _length - checks the length ofa string 
 * @s: the string.
 * Return: the lengthbof a string.
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp -  checks if the string is palindrome.
 * @i: is the index.
 * @lg: the length if the string
 * @s: the string.
 *@Return: 1 if palindrome and 0 if not.
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
					}
		else if (s[i] != s[lg])
		{
			return (0);
			}
		else
		{
			return (1);
			}
		}
	return (1);
	}

/**
 * _is_palindrome - checks if string is palindrome.
 * @s: string.
 * Return: 1 if palindrome or 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
