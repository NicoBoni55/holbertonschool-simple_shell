#include "shell.h"
extern char **environ;
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
