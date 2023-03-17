#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that prints the size of various types usin sizeof()
 *
 * Return: Returs 0 (success)
*/

int main(void)
{printf("Size of a char: %ld byte(s)", sizeof(char));
printf("Size of an int: %ld byte(s)", sizeof(int));
printf("Size of a long int: %ld byte(s)", sizeof(long int));
printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
printf("Size of a float: %ld byte(s)", sizeof(float));
return (0);
}
