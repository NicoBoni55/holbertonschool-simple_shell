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
	char *args[1024];
	size_t i = 0;
	int state;
	char *env[] = {NULL};
	char *inter_commands[] = {"exit", "env"};

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
				free(inp)
				internal_command(args[0]);
				exit(EXIT_SUCCESS);
			}
		}
		sprintf(str, "/bin/%s", args[0]);
		if (execve(str, args, env) == -1)
		{
		perror("Not found");
		free(inp);
		exit(EXIT_FAILURE);
	}
	}
	else
	{
		waitpid(pid, &state, 0);
	}
}
