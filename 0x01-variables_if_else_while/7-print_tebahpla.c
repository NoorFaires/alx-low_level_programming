#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}