#include "main"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 112)
		return (1);
	return (0);
}
