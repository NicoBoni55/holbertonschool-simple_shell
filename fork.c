#include "shell.h"
int _fork()
{
	char *argv[] = {"/bin/ls", NULL};
	int shell;
	pid_t pid;

	pid = fork();

	if (pid == -1)
		perror("Error :");

	if (pid == 0)
	{
		execve(argv[0], argv, NULL);
	}
	wait(&shell);
	return (0);
}
