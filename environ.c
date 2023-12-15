#include "shell.h"


char *env_(const char *envir) {
    int i = 0;
    char *cpy, *tok, *value;

    while (environ[i]) 
    {
        cpy = strdup(environ[i]);
        tok = strtok(cpy, "=");

        if (strcmp(envir, tok) == 0) 
	{
            value = strdup(strtok(NULL, "\n"));
	    free(cpy);
	    return (value);
        }
        
        free(cpy);
        i++;
    } 
    return (NULL);
}
