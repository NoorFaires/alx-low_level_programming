#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that prints the size of various types usin sizeof()
 *
 * Return: Returs 0 (success)
*/

int main(void)
{char c;
int a;
long int b;
long long int d;
float e;
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(e));
return (0);
}