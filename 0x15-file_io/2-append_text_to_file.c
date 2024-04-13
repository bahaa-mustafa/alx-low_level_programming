#include "main.h"

/**
 * append_text_to_file - add new text to file
 * @filename: name of file
 * @text_content: the text that will append
 *
 * Return: 1 in success and -1 in other
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t char_write;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
