#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be edited
 * @text_content: string to be written
 *
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fileptr;
	size_t data;

	if (text_content == NULL)
	{
		fileptr = open(filename, O_CREAT | O_RDONLY, S_IRUSR | S_IWUSR);

		if (fileptr == -1)
			return (-1);
		close(fileptr);
	}
	else
	{
		fileptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fileptr == -1 || filename == NULL)
			return (-1);

		data = write(fileptr, text_content, strlen(text_content));
		if (data == (unsigned long int)-1)
			return (-1);
		close(fileptr);
	}
	return (1);
}
