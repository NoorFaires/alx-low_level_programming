#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 *
 * Return : Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
