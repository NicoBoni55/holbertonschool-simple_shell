#include "shell.h"
/**
 *main - shell proyect
 *Return: zero
 */
int main(void)
{
	char *command = NULL;
	size_t size = 0;
	int n, file_;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
		write(1, "#cisfun$ ", 9);
		n = getline(&command, &size, stdin);
		}
		else
		{
			file_ = open(command, O_RDONLY);
		}
			if (file_ == -1)
			{
				perror("Error");
				return (1);
			}
		close(file_);

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
		free(command);
		command[strcspn(command, "\n")] = '\0';
		execc(command);
		}
	return (0);
}
