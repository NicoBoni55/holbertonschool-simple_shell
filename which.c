#include "shell.h"
int main(void)
{
	char *path = get_env("PATH");
	int i;
	char *direct;
	char *token;

	direct = strdup(path);
	token = strtok(direct, ":");
	printf("%s\n", token);
	for (i = 0; path[i]; i++)
	{
		token = strtok(NULL, ":");	
		printf("%s\n", token);
	}
	free(direct);
	return (0);
}
