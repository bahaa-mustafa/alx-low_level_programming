#include "main.h"
#define BUFFER_SIZE 1024


/**
 * main - main function of programe
 * @argc: nomber of command line argements
 * @argv: array of strings for command line argements
 *
 * Return: 0 in success and 97 or 98 or 99 in fail
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t char_read, char_write;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
/**
*	if (file_from == -1)
*	{
*		dprintf(STDERR_FILENO, "Error: Can't open files\n");
*		return (98);
*	}
*/
	while ((char_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		char_write = write(file_to, buffer, char_read);
		if (char_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	if (char_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	close(file_to);
	close(file_from);
	if (close(file_from == -1 || close(file_to) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd \n");
		return (100);
	}
	return (0);
}
