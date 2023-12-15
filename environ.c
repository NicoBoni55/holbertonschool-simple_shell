#include "shell.h"

extern char **environ;

int env_(const char *envir)
{
	int i = 0;
	char tok, *cpy;

	while(environ[i])
	{
	cpy = strdup(environ[i]);
	tok = strtok(cpy, "=");

	if(strcmp = (envir, tok))
	{
		printf("%s\n", environ[i]);
		i++;
	}
	}
	return(0);
}
