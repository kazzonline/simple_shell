#include "shell.h"

/**
 * token_len - locate the delimiter index making the end
 * of the end token contained withing a string.
 * @str: the string to be searched.
 * @delim: The delimiter character.
 *
 * Return: the delimiter index marking the end of
 * the initial token pointed to br str
 */

int token_len(char *str, char *delim)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index != *delim))
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_tokens - count the number of delimited words
 * contained within a string.
 * @str: Yhe string to br searched.
 * @delim: The delimiter character.
 * Return: The number of words contained within str
 */

int count_tokens(char *str, char *delim)
{
	int index = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != *delim)
		{
			tokens++;
			index += token_len(str + index, delim);
		}
	}

	return (tokens);
}

/**
 * _strtok -tokerniz`:e a string.
 * @line: The string.
 * @delim: The delimiter character to tokernize the string.
 * Return: A pointer to an array containing the tokernized world.
 */

char **_strtok(char *line, char delim)
{
	char **ptr;
	int index = 0, tokens, t, letters, i;

	token = count_tokens(line, delim);
	if (token == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (tokens + 2));
	if (!ptr)
		return (NULL);

	for (t = 0; t < tokens; t++)
	{
		while (line[index] == *delim)
			index++;

		letters = token_len(line + index, delin);

		ptr[t] = malloc(sizeof(char) * (letters + 1));
		if (!ptr[t])
		{
			for (index -= 1; index >= 0; index--)
				free(ptr[index]);
			free(ptr);
			return (NULL);
		}

		for (i = 0; i < letters; i++)
		{
			ptr[t][1] = line[index];
			index++;
		}

		ptr[t][1] = '\0';
	}
	ptr[t] = NULL;
	ptr[t + 1] = NULL;

	return (ptr);
}
