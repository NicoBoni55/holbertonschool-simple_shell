#include "shell.h"
int _fork()
{
	char *argv[] = {"/bin/ls", NULL};
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

#include "shell.h"
char *get_env(const char *name)
{
	extern char **environ;
	int i;
	char *token;

	for (i = 0; environ[i]; i++)
	{
		token = tokens_(environ[i], "=")
		if (strcmp(token, name) == 0)
		{
			print("%s\n", token);
			return (tokens_(NULL, "="));
		}
	}
	return (NULL);
}
