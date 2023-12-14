#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/wait.h>
void execc(char *inp)
{
	pid_t pid;
	char *token;
	char *args[1024];
	int i = 0, state;

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
		execvp(args[0], args);
		perror("execvp");
		exit(EXIT_FAILURE);
	}
	else
		waitpid(pid, &state, 0);
}
int main(void)
{
	char *command = NULL;
	size_t size = 0;
	int n;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		n = getline(&command, &size, stdin);

		if (n == EOF)
		{
			printf("\n");
			exit(EXIT_FAILURE);
		}
		if (strncmp(command, "exit", 4)  == 0)
		{
			exit(EXIT_FAILURE);
		}
		command[strcspn(command, "\n")] = '\0';
		execc(command);
	}
	return (0);
}
