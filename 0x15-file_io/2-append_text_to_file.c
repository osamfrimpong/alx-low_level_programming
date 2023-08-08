#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The content string to add.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_size, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	open_size = open(filename, O_WRONLY | O_APPEND);
	w = write(open_size, text_content, len);

	if (open_size == -1 || w == -1)
		return (-1);

	close(open_size);

	return (1);
}
