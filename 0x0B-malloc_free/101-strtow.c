#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * isDelimiter - returns delimiters (white space, new line or indented space)
 * @c: a char
 *
 * Return: a delimiter
 */
int isDelimiter(char c)
{
	return (c = ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - splits a string into words
 * @str: a string
 *
 * Return: pointer to array of words, NULL on failure
 */
char** strtow(char* str)
{
	int t, k, wordlen, length_str;
	int wordCount = 0, inWord = 0, wordIndex = 0, wordStart = -1;
	char **words;

	length_str = strlen(str);
	if (str == NULL || strlen(str) == 0)
		return (NULL);

	for (t = 0; t < length_str; t++)
	{
		if (!isDelimiter(str[t]) && !inWord)
		{
			inWord = 1;
			wordCount++;
		}

		else if (isDelimiter(str[t]) && inWord)
			inWord = 0;
	}

	words = malloc((wordCount + 1) * sizeof(char*));

	if (words == NULL)
		return (NULL);

	for (t = 0; t <= length_str; t++)
	{
		if (!isDelimiter(str[t]) && wordStart == -1)
			wordStart = t;

		else if (isDelimiter(str[t]) && wordStart != -1)
		{
			wordlen = t - wordStart;
			words[wordIndex] = malloc((wordlen + 1) * sizeof(char));

			if (words[wordIndex] == NULL)
			{
				for (k = 0; k < wordIndex; k++)
					free(words[k]);
			
			free(words);
			return (NULL);
			}

			strncpy(words[wordIndex], str + wordStart, wordlen);
			words[wordIndex][wordlen] = '\0';
			wordIndex++;
			wordStart = -1;
		}
	}

	words[wordIndex] = NULL;
	return (words);
}
