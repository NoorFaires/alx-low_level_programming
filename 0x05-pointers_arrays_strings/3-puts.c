#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
