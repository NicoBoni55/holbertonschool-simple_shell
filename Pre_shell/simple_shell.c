#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
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
int main()
{
	char inp[1024];

	while (1)
	{
		printf("Michelle ");
		fgets(inp, sizeof(inp), stdin);
		inp[strcspn(inp, "\n")] = '\0';
		if (strncmp(inp, "exit", 4) == 0)
			break;
		execc(inp);
	}
	return (0);
}
