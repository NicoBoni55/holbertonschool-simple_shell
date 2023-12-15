#include "shell.h"

extern char **environ;

int env_(const char *envir) {
    int i = 0;
    char *cpy, *tok;

    while (environ[i]) 
    {
        cpy = strdup(environ[i]);
        tok = strtok(cpy, "=");

        if (strcmp(envir, tok) == 0) 
	{
            printf("%s\n", environ[i]);
        }
        
        free(cpy);
        i++;
    } 
    return (0);
}
