#include "shell.h"
int main(void)
{
	char *direct = get_env("PATH");
	char *dup;
	char *token;

	dup = strdup(direct);
	token = strtok(dup, ":");
	printf("%s\n", token);

	while((token = strtok(NULL, ":")))
	{
		printf("%s\n", token);
		token += 1;
	}
	return (0);
}
