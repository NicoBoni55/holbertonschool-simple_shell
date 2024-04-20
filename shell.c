#include "shell.h"
int main(void)
{
	char *shell;
	size_t size = 32;


	while (1)
	{
		printf("$shellatina ");
		getline(&shell, &size, stdin);
		if (strcmp(shell, "exit\n") == 0)
		{
			break;
		}
		if (strcmp(shell, "ls\n") == 0 || strcmp(shell, "/bin/ls\n") == 0)
		{
			_fork();
		}
		tokens_(shell);
	}
	free(shell);
	return (0);
}
