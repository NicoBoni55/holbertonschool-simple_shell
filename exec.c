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
	size_t j;
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
		sprintf(str, "/bin/%s", args[0]);
		for (j = 0; j < sizeof(inter_commands) / sizeof(inter_commands[0]); j++)
		{
			if (strcmp(args[0], inter_commands[j]) == 0)
			{
				internal_command(args[0]);
				exit(EXIT_SUCCESS);
			}
		}
		execve(str, args, env);
		execve(args[0], args, env);
		perror("Not found");
		exit(EXIT_FAILURE);
	}
	else
		waitpid(pid, &state, 0);
}
