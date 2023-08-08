/**
 * create_file - Creates a file.
 * @filename: pointer to the name of the file to be created.
 * @text_content: pointer to the content to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_d, text_content, len);

	if (file_d == -1 || w == -1)
		return (-1);

	close(file_d);

	return (1);
}
