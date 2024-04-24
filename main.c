#include "shell.h"
/**
 * main - main
 *
 * Return: Always 0
 */
int main(void)
{
	extern char **environ;
        char *shell;
        char **arr;
        size_t size = 0;
	pid_t pid;

	pid = fork();

        while (1)
        {
                printf("$shellatina ");

                if (getline(&shell, &size, stdin) == -1)
			return (0);
		shell[strlen(shell) -1] = '\0';
                arr = tokenizar(shell);

                if (strcmp(shell, "exit") == 0)
                {
                        break;
                }
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
