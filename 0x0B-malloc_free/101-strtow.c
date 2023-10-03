#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: split string
 */
char **strtow(char *str)
{
	int wordcnt = 0, t, index = 0;
	char *point, **words;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	point = strtok(str, " ");
	while (point != NULL)
	{
		wordcnt++;
		point = strtok(NULL, " ");
	}

	words = (char **)malloc((wordcnt + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (t = 0; t <= wordcnt; t++)
		words[t] = NULL;

	while (point != NULL)
	{
		words[index] = (char *)malloc(strlen(point) + 1);

		if (words[index] == NULL)
		{
			for (t = 0; t < index; t++)
				free(words[t]);

			free(words);
			return (NULL);
		}

		strcpy(words[index], point);
		index++;
		point = strtok(NULL, " ");
	}
	return (words);
}
