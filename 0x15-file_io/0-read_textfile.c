#include "main.h"

/**
 * read_textfile - read text from file and write them
 * @filename: name of file
 * @letters: number of litters that will read and write
 *
 * Return: the actual number of letters reads and write or 0 in failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t char_read, char_write;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	char_read = read(file, buffer, letters);
	if (char_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	char_write = write(STDOUT_FILENO, buffer, char_read);
	if (char_write == -1 || char_write != char_read)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (char_write);
}
