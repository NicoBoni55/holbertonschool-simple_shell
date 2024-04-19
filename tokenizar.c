#include "shell.h"
int tokens_(char *s1)
{
	char *dup;
	char **array;
	char *token;
	int count = 0;

	dup = strdup(s1);
	token = strtok(dup, " ");
	/* GET LEN */
	while (token)
	{
		token = strtok(NULL, " ");
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
	token = strtok(dup, " ");
	count = 0;
	/* INSERT TOKENS */
	while (token)
	{
		array[count++] = strdup(token);
		token = strtok(NULL, " ");
	}
	array[count] = NULL;

	/* CHECK IF IT WORKS THEN FREES */
	for (count = 0; array[count]; count++)
	{
		printf("%s\n", array[count]);
		free(array[count]);
	}
	free(dup);
	free(array);		
}	
