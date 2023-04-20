#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
*
* @argc: number of arguments
*
* @argv: double pointer to  arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int (*func_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	func_op = get_op_func(argv[2]);

	if (func_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_op(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
