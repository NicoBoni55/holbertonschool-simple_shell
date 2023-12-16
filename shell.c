#include "shell.h"
/**
 *main - shell proyect
 *Return: zero
 */
int main(void)
{
	char *command = NULL;
	size_t size = 0;
	int n;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
		write(1, "#cisfun$ ", 9);
		n = getline(&command, &size, stdin);
		}

		if (n == EOF)
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		if (strncmp(command, "exit", 4)  == 0)
		{
			free(command);
			exit(EXIT_SUCCESS);
		}
		 else if (strncmp(command, "env", 3) == 0)
        	{
            		env_();
        	}
		else
		{
		command[strcspn(command, "\n")] = '\0';
		execc(command);
		}
	}
	return (0);
}
