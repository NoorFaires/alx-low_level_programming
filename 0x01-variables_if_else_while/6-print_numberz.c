#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a = '0';

        while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
