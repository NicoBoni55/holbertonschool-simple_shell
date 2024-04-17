#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int _fork();
int _execve(const char *file, const char *argv, const char *envp);
