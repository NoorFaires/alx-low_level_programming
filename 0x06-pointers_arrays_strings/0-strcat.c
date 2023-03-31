#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string
 * @dest: pointer to destination output
 * @src: pointer to source input
 * Return: pointer to result @dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
