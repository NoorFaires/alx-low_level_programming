#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints alphabet in lowercase
 * return: Returns 0 (success)
*/

int main(void)
{
	char c = 'a';
while (c <= 'z')
{ putchar(c);
c++;
}
putchar('\n');
return (0);
}
