#include "shell.h"
/**
 * tokens_ - tokens
 * @s1 : string
 * @delim : delim
 *
 * Return: Always 0
 */
char *tokens_(char *s1, const char *delim)
{
	char *dup;
	char **array;
	char *token;
	int count = 0;

	delim = " ";
	dup = strdup(s1);
	token = strtok(dup, delim);

	while (token)
	{
		token = strtok(NULL, delim);
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
	count = 0;
	while (token)
	{
		array[count++] = strdup(token);
		token = strtok(NULL, delim);
	}
	array[count] = NULL;
	for (count = 0; array[count]; count++)
	{
		free(array[count]);
	}
	free(dup);
	free(array);
	return (0);
}
