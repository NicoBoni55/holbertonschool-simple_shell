#include "shell.h"

extern char **environ;

void env_() 
{
    int i = 0;

    while (environ[i] != NULL) 
    {
	printf("%s\n", environ[i]);
        i++;
    } 
}
