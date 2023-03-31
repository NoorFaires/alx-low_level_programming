#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to result @dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
