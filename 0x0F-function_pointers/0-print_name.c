#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 * @name: the string name
 * @f: the print function pointer
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
