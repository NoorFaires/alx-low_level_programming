#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input string
 * @s2: input string
 * Return: If the strings are equals return "0", if not return other number
*/

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res = ((int)*s1 - 48) - ((int)*s2 - 48);
		}
		s1++;
		s2++;
	}
	return (res);
}
