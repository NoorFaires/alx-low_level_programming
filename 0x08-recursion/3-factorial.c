#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n : int input
 *
 * Return : int the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
