#include "shell.h"
int main(void)
{
	char *path = get_env("PATH");
	char *token;

	token = strtok(path, ":");
	printf("%s\n", token);
	while (token)
	{
		token = strtok(NULL, ":");
		printf("%s\n", token);
	}

	return (0);
}
