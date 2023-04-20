#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for the School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *) main;
	int i, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != b - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
