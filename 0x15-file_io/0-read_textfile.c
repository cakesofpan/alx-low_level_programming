#include "main.h"

/**
 * read_textfile - reads a etxt file and prints it to POXIS stdout
 * @filename: name of the file to be edited
 * @letters: no of letters to be printed
 *
 * Return: actual no of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fileptr;
	char ch;
	size_t t = 0;

	fileptr = fopen(filename, "r");
	if (fileptr == NULL)
		return (0);

	while ((ch = getc(fileptr)) != EOF && t < letters)
	{
		printf("%c\n", ch);
		t++;
	}

	if (t != letters)
		return (0);

	fclose(fileptr);
	return (0);
}
