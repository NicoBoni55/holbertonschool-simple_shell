#include "shell.h"
/**
 *commandPath - build command path
 *@command : command to execute
 *@path : path
 *
 * Return: nothing
 */
void commandPath(char *command, char *path)
{
	if (strchr(command, '/') == NULL)
	{
		sprintf(path, "/bin/%s", command);
	}
	else
	{
		sprintf(path, "%s", command);
	}
}
