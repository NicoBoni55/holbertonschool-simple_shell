#include "shell.h"
char *get_env(const char *name)
{
	extern char **environ;
	int i;
	char *token;

	for (i = 0; environ[i]; i++)
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			return(strtok(NULL, "="));
		}
	}
	return (NULL);
}
