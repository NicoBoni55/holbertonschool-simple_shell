#include "shell.h"
/**
 *env_ - environ shell commands
 *
 *Return: noting
 */
void env_(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
