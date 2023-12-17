#include "shell.h"
/**
 *execc - execute shell commands
 *@inp : input
 *
 *Return: zero
 */
void execc(char *inp)
{
	char str[100];
	pid_t pid;
	char *token;
	char *args[500];
	size_t i = 0;
	int pipe_fd[2];
	ssize_t bytes_read;
	char buffer[1024];
	int state;
	char *env[] = {NULL};
	char *inter_commands[] = {"exit", "env"};

	if (pipe(pipe_fd) == -1)
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		close(pipe_fd[0]);
		dup2(pipe_fd[1], STDOUT_FILENO);

		token = strtok(inp, " ");
		while (token != NULL && i < sizeof(args) / sizeof(args[0]) - 1)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;

		for (i = 0; i < sizeof(inter_commands) / sizeof(inter_commands[0]); i++)
		{
			if (strcmp(args[0], inter_commands[i]) == 0)
			{
				free(inp);
				internal_command(args[0]);
				exit(EXIT_SUCCESS);
			}
		}
		execve(str, args, env);
		execve(args[0], args, env);

		perror("Not found");
		free(inp);
		exit(EXIT_FAILURE);
	}
	else
	{
		close(pipe_fd[1]);
		waitpid(pid, &state, 0);
		bytes_read = read(pipe_fd[0], buffer, sizeof(buffer));

		if (bytes_read > 0)
		{
			write(1, buffer, bytes_read);
		}
		env_();
		close(pipe_fd[0]);
	}
}
