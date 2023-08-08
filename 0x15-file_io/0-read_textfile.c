#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it to POSIX STDOUT.
 * @filename: pointer to name of text file
 * @letters: size of letters to be read
 * Return: ssizet actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t w;
	ssize_t size;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	size = read(file_d, buffer, letters);
	w = write(STDOUT_FILENO, buffer, size);

	free(buffer);
	close(file_d);
	return (w);
}
