#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string
 *
 * Description: a function that concatenates two strings.
 *
 * @dest: pointer to destination output
 * @src: pointer to source input
 * @n: number of bytes from @src
 * Return: pointer to result @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
