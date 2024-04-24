#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

int _fork();
int _execve(const char *file, const char *argv, const char *envp);
char **tokenizar(char *s1);
char *get_env(const char *name);
