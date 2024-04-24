#include "shell.h"
/**
 * main - main
 *
 * Return: Always 0
 */
int main(void)
{
	char *shell;
	char **arr;
	size_t size = 0;

	while (1)
	{
		printf("$shellatina ");
		getline(&shell, &size, stdin);
		if (strcmp(shell, "exit\n") == 0)
		{
			break;
		}
		arr = tokens_(shell);
		if (pid == -1)
                	perror("Error :");

		if (pid == 0)
        	{
                	execve(arr[0], arr, environ);
        	}
        	wait(&pid);
	}
	free(shell);
	return (0);
}
