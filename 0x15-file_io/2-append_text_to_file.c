#include "main.h"

/**
 * check_file - checks if the file exists or nah
 *
 * @filename: name of the file
 * Return: 1 if present else -1
 */
int check_file(const char *filename)
{
	if (access(filename, F_OK) != -1)
		return (1);

	else
		return (-1);
}

/**
 * append_text_to_file - appends text to a file, adds text without overiding it
 * @filename: name of the file to be edited
 * @text_content: string to be added
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileptr;
	size_t data;

	if ((check_file(filename) == -1) || text_content == NULL)
	{
		fileptr = open(filename, O_CREAT | O_RDONLY, S_IRUSR | S_IWUSR);
		if (fileptr == -1)
			return (-1);

		close(fileptr);
	}

	else
	{
		fileptr = open(filename, O_CREAT | O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
		if (fileptr == -1 || filename == NULL)
			return (-1);

		data = write(fileptr, text_content, strlen(text_content));
		if (data == (unsigned long int)-1)
			return (-1);

		close(fileptr);
	}
	return (1);
}
