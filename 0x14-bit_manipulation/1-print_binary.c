#include "main.h"
/**
 * power_func - calculates number with base and power
 * @base: the base
 * pow: the power
 * Return: value of base and power
 */
unsigned long int power_func(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int power_res, result;
	char flag;

	flag = 0;
	power_res = power_func(2, sizeof(unsigned long int) * 8 - 1);

	while (power_res != 0)
	{
		result = n & power_res;
		if (result == power_res)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || power_res == 1)
		{
			_putchar('0');
		}
		power_res >>= 1;
	}
}

