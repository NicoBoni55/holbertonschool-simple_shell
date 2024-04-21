#include "shell.h"
int main(void)
{
	char *shell;
	char *path = get_env("PATH");
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
		if (strcmp(shell, "printenv\n") == 0)
		{
			printf("%s\n", path);
		}
		tokens_(shell, " ");
	}
	free(shell);
	return (0);
}
