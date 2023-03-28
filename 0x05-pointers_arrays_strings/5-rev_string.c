#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char emp;
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len ; i++)
	{
		emp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = emp;
	}
}
