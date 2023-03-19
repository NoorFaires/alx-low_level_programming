#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int c = '0';
	int d = 'a';

while (c <= '9')
{
	putchar(c);
	c++;
}
while (d <= 'f')
{
	putchar(d);  
	d++;
}
putchar('\n');
return (0);
}
