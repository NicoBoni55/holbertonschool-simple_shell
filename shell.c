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
			printf("%s\n", shell);
			break;
		}
		tokens_(shell);
		_fork();
	}
	free(shell);
	return (0);
}
