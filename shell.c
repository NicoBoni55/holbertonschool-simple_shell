#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	char *shell;
	size_t size = 32;

	while (1)
	{
		printf("$shellatina ");
		getline(&shell, &size, stdin);
		printf("%s", shell);
	}
	free(shell);
	return (0);
}
