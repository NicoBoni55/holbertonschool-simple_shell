#include "shell.h"
int main(void)
{
	char *shell;
	size_t size = 32;

	while (1)
	{
		printf("$shellatina ");
		getline(&shell, &size, stdin);
		_fork();
	}
	free(shell);
	return (0);
}
