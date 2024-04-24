#include "shell.h"
extern char **environ;
int _fork()
{
	char **arr;
	pid_t pid;

	pid = fork();

	if (pid == -1)
		perror("Error :");

	if (pid == 0)
	{
		execve(argv[0], argv, environ);
	}
	wait(&pid);
	return (0);
}

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
