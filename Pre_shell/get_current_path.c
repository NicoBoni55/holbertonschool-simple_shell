#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int get_current_path(const char *path, const char *name)
{
	char fpath[1024];
	char *token;
	char cpath[1024];
	int l;

	strcpy(cpath, path);
	token = strtok(cpath, ":");
	while (token)
	{
		l = strlen(token) + strlen(name) + 2;
		if (l > 1024)
		{
			perror("Too long");
			exit(EXIT_FAILURE);
		}
		strcpy(fpath, token);
		strcat(fpath, "/");
		strcat(fpath, name);
		if (access(fpath, F_OK) == 0)
		{
			write(STDOUT_FILENO, fpath, strlen(fpath));
			write(STDOUT_FILENO, "\n", 1);
		}
		token = strtok(NULL, ":");
	}
}
int main (int argc, char *argv[])
{
	char *name = argv[1];
	char *path = getenv("PATH");

	if (argc != 2)
	{
		perror("Error of format");
		exit(EXIT_FAILURE);
	}
	if (path == NULL)
	{
		perror("No path");
		exit(EXIT_FAILURE);
	}
	get_current_path(path, name);
	return (0);
}
