#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t nb;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	nb = read(fo, &buf[0], letters);
	nb = write(STDOUT_FILENO, &buf[0], nb);
	close(fo);
	return (nb);
}
