#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase.
 *
 * Return: 0 (success)
*/

int main(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                putchar(c);
                c++;
        }
        putchar('\n');
        return (0);

}
