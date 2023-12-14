#include <stdio.h>

extern char **environ;

int main()
{
	char **env = environ;

	for (env; *env != NULL; env++)
		printf("%s\n", *env);
	return(0);
}
