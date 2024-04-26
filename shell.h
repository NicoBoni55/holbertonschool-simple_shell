#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
extern char **environ;
int _execve(const char *file, const char *argv, const char *envp);
char **tokenizar(char *s1);
#endif
