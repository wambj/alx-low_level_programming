#include "main.h"

/**
 * append_text_to_file - appends extra text to an already existing file
 *
 * @filename: the name of the file
 *
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	write(file, text_content, i);

	return (1);
}
