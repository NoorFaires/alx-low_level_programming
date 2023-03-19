#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;


	}
	putchar('\n');
	return (0);
}
