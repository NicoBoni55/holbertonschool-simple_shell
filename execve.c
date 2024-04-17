#include "shell.h"
int _execve(const char *file, const char *argv, const char *envp)
{
	char *argv[]= {"#!/bin/bash", NULL};

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error: ");
		break;
	}
	execve(argv[0], argv, NULL);
	return (0);
}	
