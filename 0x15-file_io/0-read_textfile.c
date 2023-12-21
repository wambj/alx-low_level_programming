#include "main.h"

/**
 * read_textfile - reads the words that exist
 *
 * @filename: name of the file to read
 *
 * @letters: number of letters to be read and printed
 *
 * Return: Always 0 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_th;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_th = open(filename, O_RDONLY);
	if (file_th == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_th);
		return (0);
	}

	lenr = read(file_th, buffer, letters);
	close(file_th);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
	{
		return (0);
	}

	return (lenw);
}
