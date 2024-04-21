#include "shell.h"
char *get_env(const char *name)
{
	int i;
        extern char **environ;
        char *tokenpath;

        for (i = 0; environ[i]; i++)
        {
                tokenpath = strtok(environ[i], "=");
                if (strcmp(tokenpath, name) == 0)
                {
                        return (strtok(NULL, "="));
                }
        }
	return (NULL);
}
