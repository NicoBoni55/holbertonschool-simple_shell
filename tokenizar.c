#include "shell.h"
/**
 * tokenizar - tokens
 * @s1 : string
 *
 * Return: Always 0
 */
char **tokenizar(char *s1)
{
	char *dup, *token, *delim = " \t";
	char **array;
	int count = 0, i = 0, j = 0;

	dup = strdup(s1);
	token = strtok(dup, delim);
	while ((token = strtok(NULL, delim)))
	{
		count++;
	}
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
	{
		perror("Error! memory not allocated.");
		free(array);
		exit(-1);
	}
	free(dup);
	dup = strdup(s1);
	token = strtok(dup, delim);
	while (token)
	{
		array[i] = strdup(token);
		if (!array[i])
		{
			for (j = 0; j > i; j++)
			{
				free(array[count]);
				free(dup);
				free(array);
				return (NULL);
			}
		}
		i++;
		token = strtok(NULL, delim);
	}
	array[i] = NULL;
	free(dup);
	return (array);
}
