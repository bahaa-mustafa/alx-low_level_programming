#include "main.h"


/**
 * create_file - creat a new file
 * @filename: name of file
 * @text_content: if not null then add it to file
 *
 * Return: 1 in success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t char_write;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		char_write = write(file, text_content, strlen(text_content));
		if (char_write == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
