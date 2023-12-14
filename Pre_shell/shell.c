#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/wait.h>

int main()
{
	char command[100];
	char *arg[] = {command, NULL};
	char *buffer = NULL;
	size_t size = 0;
	int pid, ppid, n;

	while (1)
	{
		printf("#cisfun$ ");
		fgets(command, sizeof(command), stdin);

	if (strncmp(command, "exit", 4)  == 0)
	{
		exit(EXIT_FAILURE);
	}
	if (n == EOF)
	{
		exit(EXIT_FAILURE);
	}
	printf("%s", buffer);
	buffer[n - 1] = '\0';

	command[strcspn(command, "\n")] = '\0';

	pid = fork();
	if (pid == 0)
	{
		execve(arg[0], arg, NULL);
		return (0);
	}
	else
	{
		waitpid(pid, NULL, 0);
	}
	}
	return(0);
}
