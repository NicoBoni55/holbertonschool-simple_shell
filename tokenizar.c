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
	if (!dup)
	{
		perror("Error! memory not allocated.");
		exit(EXIT_FAILURE);
	}
	token = strtok(dup, delim);
	while (token)
	{
		count++;
	       	token = strtok(NULL, delim);
	}
	free(dup);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
	{
		perror("Error! memory not allocated.");
		exit(EXIT_FAILURE);
	}
	dup = strdup(s1);
	if (!dup)
	{
		perror("Error! memory not allocated.");
		free(array);
		exit(EXIT_FAILURE);
	}
	token = strtok(dup, delim);
	while (token)
	{
		array[i] = strdup(token);
		if (!array[i])
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			free(dup);
			exit(EXIT_FAILURE);
		}
		i++;
		token = strtok(NULL, delim);
	}
	array[i] = NULL;
	free(dup);
	return (array);
}
