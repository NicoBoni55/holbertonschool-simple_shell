#include "shell.h"
/**
 * get_env - get environ
 * @name : name path
 *
 * Return: path or NULL if fail
 */
char *get_env(const char *name)
{
	char **environ;
	int i;
	char *token;

	for (i = 0; environ[i]; i++)
	{
		token = strtok(environ[i], "=");
		if (strcmp(token, name) == 0)
		{
			return (strtok(NULL, "="));
		}
	}
	return (NULL);
}
