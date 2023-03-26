#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int num, ro, count;

	for (row = 0; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
			num = count;
		{
			if (count > 9)
			{
				_putchar(1 + 48);
				 num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
