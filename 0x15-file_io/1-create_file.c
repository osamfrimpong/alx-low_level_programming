/**
 * create_file - Creates a file.
 * @filength_of_textame: pointer to the name of the file to be created.
 * @text_content: pointer to the content to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filength_of_textame, char *text_content)
{
	int file_d, w, length_of_text = 0;

	if (filength_of_textame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length_of_text] != '0\')
			length_of_text++;
	}

	file_d = open(filength_of_textame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_d, text_content, length_of_text);

	if (file_d == -1 || w == -1)
		return (-1);

	close(file_d);

	return (1);
}
