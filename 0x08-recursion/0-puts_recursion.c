#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s : string input
 *
 * Return : Nothing
*/

void _puts_recursion(char *s)
{
	int len, i;

	len = 0;
	while (*s != '\0')
		len++;
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	_putchar('\n');
}

