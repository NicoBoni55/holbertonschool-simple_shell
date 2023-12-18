#include "shell.h"
/**
 *execc - execute shell commands
 *@inp : input
 *
 *Return: zero
 */
void execc(char *inp)
{
	char str[100], *token, *args[500];
	pid_t pid;
	size_t i = 0;
	int state;
	char *inter_commands[] = {"exit", "env"}, *env[] = {NULL};

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
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
		commandPath(inp, str);
		execve(str, args, env);
		execve(args[0], args, env);
		free(inp);
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &state, 0);
	}
}
