#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/wait.h>

int main()
{
	char *command = NULL;
	char *arg[] = {command, NULL};
	size_t size = 0;
	int pid, ppid, n;

	while (1)
	{
		write(1, "#cisfun$ ",9);
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
