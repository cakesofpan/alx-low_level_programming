#include "main.h"

/**
 * create_word - creates a word and puts into array
 * @jina: array of strings
 * @str: the string
 * @start: beginning
 * @end: end index of the word
 * @index: index of the array to insert the word
 */
void create_word(char **jina, char *str, int start, int end, int index)
{
	int t, u;
	
	t = end - start;
	jina[index] = malloc(sizeof(char) * (t + 1));

	for (u = 0; start < end; start++, u++)
		jina[index][u] = str[start];
	jina[index][u] = '\0';
}

/**
 * fetch - fetches words into an array
 * @jina: strings array
 * @str: string
 *
 * Return: NULL
 */
void fetch(char **jina, char *str)
{
        int t, u, start, flag;
        t = u = flag = 0;

        while (str[t])
        {
                if (flag == 0 && str[t] != ' ')
                {
                        start = t;
                        flag = 1;
                }

                if (t > 0 && str[t] == ' ' && str[t - 1] != ' ')
                {
                        create_word(jina, str, start, t, u);
                        u++;
                        flag = 0;
                }
                t++;
        }

        if (flag == 1)
                create_word(jina, str, start, t, u);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to the words
 */
char **strtow(char *str)
{
        int t, flag, len;
        char **jina;

        if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
                return (NULL);

        t = flag = len = 0;
        while (str[t])
        {
                if (flag == 0 && str[t] != ' ')
                        flag = 1;

                if (t > 0 && str[t] == ' ' && str[t - 1] != ' ')
                {
                        flag = 0;
                        len++;
                }
                t++;
	 }

        len += flag == 1 ? 1 : 0;
        if (len == 0)
                return (NULL);

        jina = malloc(sizeof(char *) * (len + 1));
        if (jina == NULL)
                return (NULL);

        fetch(jina, str);
        jina[len] = NULL;
        return (jina);
}
