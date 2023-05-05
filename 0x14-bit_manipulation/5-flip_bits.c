#include "main.h"

/**
 *flip_bits - returns the number of bits to flip
 *@n: first number
 *@m: final number
 *
 *Return: the number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipval = n ^ m;
	int i = 0;

	while (flipval)
	{
		if (flipval & 1)
			i++;
		flipval >>= 1;
	}
	return (i);
}
