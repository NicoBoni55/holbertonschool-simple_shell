#include "shell.h"
/**
 *internal_command - function to internal commands
 *@command : commands to execute
 *
 * Return: zero
 */
void internal_command(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		exit(EXIT_SUCCESS);
	}
	else if (strcmp(command, "env") == 0)
	{
		env_();
	}
}
